//
// Created by vova on 28.09.22.
//

#ifndef UNTITLED_DESTROY_WALL_H
#define UNTITLED_DESTROY_WALL_H
#include "Event_change_map.h"
#include "../Logs/Command_destroy_wall.h"
class Destroy_wall:public Event_change_map {
public:
    Destroy_wall(std::vector<Playing_cell *> c, Observable *l);
    void change_play() override;
};


#endif //UNTITLED_DESTROY_WALL_H
