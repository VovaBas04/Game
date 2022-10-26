//
// Created by vova on 06.10.22.
//

#include "Factory_Map.h"
Event_playing * Factory_Map::create_positive_event() {
    Event_playing *e=new Destroy_wall(near_field,level);
    return e;
}
Event_playing * Factory_Map::create_negative_event(){
    Event_playing *e=new Create_Wall(near_field,level);
    return e;
}
Factory_Map::Factory_Map(std::vector<Playing_cell *> c, Observer_Levels *l) {
    near_field.swap(c);
    level=l;
}
