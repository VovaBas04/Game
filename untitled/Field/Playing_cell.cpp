//
// Created by vova on 06.09.22.
//

#include "Playing_cell.h"
#include <iostream>
Playing_cell::Playing_cell(bool is, float s, float x, float y): side(s), is_passability(is), coor_x(x), coor_y(y),is_was(false){
}

bool Playing_cell::get_passability(){
    return is_passability;
}
void Playing_cell::set_was(){
    is_was=true;
}
int Playing_cell::get_was() {
    return is_was;
}
void Playing_cell::set_event(Event_playing *e){
    event=e;
}
void Playing_cell::set_passability(bool is) {
    is_passability=is;
}
bool Playing_cell::is_here(Move *move_hero) {
    float x=move_hero->get_x();
    float y=move_hero->get_y();
    if (x>=coor_x-side/2 && y>=coor_y-side/2 && x<coor_x+side/2 && y<coor_y+side/2) {
        return true;
    }
    else
        return false;
}
float Playing_cell::get_x(){
    return coor_x;
}
float Playing_cell::get_y(){
    return coor_y;
}
float Playing_cell::get_side(){
    return side;
}
Event_playing * Playing_cell::get_event(){
    return event;
}
