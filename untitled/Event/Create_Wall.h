//
// Created by vova on 28.09.22.
//

#ifndef UNTITLED_CREATE_WALL_H
#define UNTITLED_CREATE_WALL_H
#include "Event_change_map.h"

class Create_Wall:public Event_change_map {
public:
    Create_Wall(std::vector<Playing_cell *> c, Observer_Levels *l);
    void change_play() override;
};


#endif //UNTITLED_CREATE_WALL_H
