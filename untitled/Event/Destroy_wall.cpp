//
// Created by vova on 28.09.22.
//

#include "Destroy_wall.h"
void Destroy_wall::change_play() {
    for (int i=0;i<4;i++)
        near_field[i]->set_passability(true);
    level->set_command_of_prefix("[GM]",new Command_destroy_wall);
}
Destroy_wall::Destroy_wall(std::vector<Playing_cell *> c, Observable *l){
    for(int i=0;i<4;i++)
        near_field.push_back(c[i]);
    level=l;
}