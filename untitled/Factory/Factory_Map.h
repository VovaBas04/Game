//
// Created by vova on 06.10.22.
//

#ifndef UNTITLED_FACTORY_MAP_H
#define UNTITLED_FACTORY_MAP_H
#include "Abstract_factory.h"
#include "../Event/Destroy_wall.h"
#include "../Event/Create_Wall.h"
class Factory_Map:public Abstract_factory {
public:
    Event_playing * create_positive_event() override;
    Event_playing * create_negative_event() override;
    Factory_Map(std::vector<Playing_cell *> c, Observable *l);
private:
    std::vector<Playing_cell *> near_field;
    Observable *level;
};


#endif //UNTITLED_FACTORY_MAP_H
