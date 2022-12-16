//
// Created by vova on 11.12.22.
//

#include "Save_data.h"
Save_data::Save_data(Playing_map *m) {
    field=m;
}

void Save_data::save_position(std::string path) {
    std::fstream out;
    out.open(path,std::ios::out);
    if (!out.is_open())
        throw Wrong_Write_File(path);
    float x=field->get_moving()->get_x(),y= field->get_moving()->get_y();
    out<<x<<'\n'<<y;
    out.seekp(0, std::ios::beg);
    out.close();
}

void Save_data::save_characteristics(std::string path) {
    std::fstream out;
    out.open(path,std::ios::out);
    if (!out.is_open())
        throw Wrong_Write_File(path);
    Player *player=field->get_moving()->get_player();
    out<<player->get_health()<<'\n'<<player->get_power()<<'\n'<<player->get_egg();
    out.seekp(0, std::ios::beg);
    out.close();
}
void Save_data::save_cells(std::string path) {
    std::fstream out;
    out.open(path,std::ios::out);
    if (!out.is_open())
        throw Wrong_Write_File(path);
    for (int i=0;i<field->get_height();i++)
        for (int j=0;j<field->get_width();j++) {
            Playing_cell *cell=field->get_cell(i,j);
            out << cell->get_event()->get_save_code() <<' '<<cell->get_was()<<' '<<cell->get_passability()<<'\n' ;
        }
    out.seekp(0, std::ios::beg);
    out.close();
}