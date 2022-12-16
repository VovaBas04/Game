//
// Created by vova on 11.12.22.
//

#include "Load_data.h"
Load_data::Load_data(Playing_map *map) {
    field=map;
}

void Load_data::load_cells(std::string path) {
    std::ifstream in;
    std::vector<int> s;
    in.open(path,std::ios::in);
    if (!in.is_open())
        throw Wrong_Read_File(path);
    for (int i=0;i<field->get_height();i++) {
        for (int j = 0; j < field->get_width(); j++) {
            for (int k=0;k<3;k++){
                s.push_back(0);
                in>>s[k];
            }
            if (s[0]<0 || s[0]>5 || s[1]<0 || s[1]>1 || s[2]<0 || s[2]>1)
                throw Wrong_data(path,std::to_string(i*field->get_height()+j));
            field->set_event_of_code(i, j,s[0]);
            if (s[1])
                field->get_cell(i,j)->set_was();
            field->get_cell(i,j)->set_passability(s[2]);
        }
    }
}
void Load_data::load_characteristic(std::string path) {
    std::ifstream in;
    in.open(path,std::ios::in);
    if (!in.is_open())
        throw Wrong_Read_File(path);
    Player *hero=field->get_moving()->get_player();
    int health=0,power=0,egg=0;
    in>>health>>power>>egg;
    hero->set_health(health);
    hero->set_power(power);
    hero->set_egg(egg);
    in.close();
}
void Load_data::load_position(std::string path){
    std::ifstream in;
    in.open(path,std::ios::in);
    if (!in.is_open())
        throw Wrong_Read_File(path);
    float x,y;
    in>>x>>y;
    Move *move=field->get_moving();
    move->set_position(x,y);
    in.close();
}