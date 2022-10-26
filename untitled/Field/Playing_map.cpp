//
// Created by vova on 07.09.22.
//
#include "Playing_map.h"
//using namespace std;
Playing_map::Playing_map(int w, int h,Move *m,std::vector<Observer_Levels *> l): count_width(w), count_height(h), move(m), levels(l) {
    float x = 1;
    float y = 1;
    srand(time(NULL));
    for (int i = 0; i < h; i++) {
        std::vector<Playing_cell> in;
        for (int j = 0; j < w; j++) {
            int randint=rand();
            Event_playing *e;
            if (randint%7)
                    in.push_back(Playing_cell(true, side_field, x + j * side_field, y + i * side_field));
            else {
                in.push_back(Playing_cell(false, side_field, x + j * side_field, y + i * side_field));
            }}
        fields.push_back(in);
    }
    fields[0][0].set_passability(true);
    for (int i=0;i<h;i++)
        for (int j=0;j<w;j++) {
            Abstract_factory *fac;
            int randint = rand();
            if (randint % 2)
                fac = new Factory_Map(near_fields(i, j),levels[Game]);
            else
                fac = new Factory_Characteristic(move->get_player(),levels[Game]);
            randint = rand();
            if (randint%2)
                fields[i][j].set_event(fac->create_positive_event());
            else
                fields[i][j].set_event(fac->create_negative_event());
        }
}
Playing_map::Playing_map(Move *m,std::vector<Observer_Levels *> l): Playing_map(10, 10, m, l){}
Playing_map::Playing_map(const Playing_map &map):count_width(map.count_width),count_height(map.count_height),side_field(map.side_field),levels(map.levels){
    for (int i = 0; i < map.count_height; i++) {
        std::vector<Playing_cell> in;
        for (int j = 0; j < map.count_width; j++)
            in.push_back(map.fields[i][j]);
        fields.push_back(in);
}}
Playing_map&Playing_map::operator=(const Playing_map &map){
    if (this!=&map) {
        for (int i = 0; i < count_height; i++)
            fields[i].clear();
        fields.clear();
        count_width = map.count_width;
        count_height = map.count_height;
        for (int i = 0; i < map.count_height; i++)
            for (int j = 0; j < map.count_width;j++)
                fields[i][j] = map.fields[i][j];
        }
    return *this;
    }
Playing_map::Playing_map (Playing_map &&map){
    std::swap(fields,map.fields);
    std::swap(count_width,map.count_width);
    std::swap(count_height,map.count_height);
}
Playing_map& Playing_map:: operator=(Playing_map&& map){
    if (this!=&map) {
        std::swap(fields, map.fields);
        std::swap(count_width, map.count_width);
        std::swap(count_height, map.count_height);
    }
    return *this;
}
std::vector<std::vector<Playing_cell>> Playing_map::render_map() {
    Factory_Game *fac=new Factory_Game(move->get_player(),window,levels[Info]);
    for (int i=0;i<count_height;i++)
        for(int j=0;j<count_width;j++) {
            if (fields[i][j].is_here(move)) {
                if (i==count_height-1 && j==count_width-1)
                    move->get_player()->set_egg(true);
                std::vector<Playing_cell *> near_field;
                Event_playing *e=fields[i][j].get_event();
                if (!fields[i][j].get_was()){
                        e->change_play();
                        fields[i][j].set_was();
                }
                near_field=near_fields(i, j);
                move->set_dont_move(dont_move(near_field));
                near_field.clear();
                e=fac->create_positive_event();
                e->change_play();
                e=fac->create_negative_event();
                e->change_play();
            }
        }
    return fields;
}
int Playing_map::get_height() {
    return count_height;
}
int Playing_map::get_width() {
    return count_width;
}
int Playing_map::get_side_field() {
    return side_field;
}
Move * Playing_map::get_moving(){
    return move;
}
std::vector<Playing_cell *> Playing_map::near_fields(int i, int j) {
    std::vector<Playing_cell *> near_fields;
    if (j==0)
        near_fields.push_back(&fields[i][count_width-1]);
    else
        near_fields.push_back(&fields[i][j-1]);
    if (j==count_width-1)
        near_fields.push_back(&fields[i][0]);
    else
        near_fields.push_back(&fields[i][j+1]);
    if (i==count_height-1)
        near_fields.push_back(&fields[0][j]);
    else
        near_fields.push_back(&fields[i+1][j]);
    if (i==0)
        near_fields.push_back(&fields[count_height-1][j]);
    else
        near_fields.push_back(&fields[i-1][j]);
    return near_fields;
}
std::vector<bool> Playing_map::dont_move(std::vector<Playing_cell *> near_filds){
    std::vector<bool> dont_moving(4);
    for (int i=0;i<4;i++)
        if (near_filds[i]->get_passability())
            dont_moving[i]= false;
        else
            dont_moving[i]=true;
    return dont_moving;
}
void Playing_map::set_window(sf::Window *w) {
    window=w;
}