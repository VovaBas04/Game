//
// Created by vova on 28.09.22.
//

#include "Create_Wall.h"
void Create_Wall::change_play() {
    for (int i=0;i<4;i++)
        if (near_field[i]->get_passability() && !near_field[i]->get_was()) {
            near_field[i]->set_passability(false);
            break;
        }
    level->set_command(Create);
}
Create_Wall::Create_Wall(std::vector<Playing_cell *> c, Observer_Levels *l) {
    for(int i=0;i<4;i++)
        near_field.push_back(c[i]);
    level=l;
}