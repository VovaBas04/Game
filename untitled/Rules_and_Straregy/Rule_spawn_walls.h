//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_RULE_SPAWN_WALLS_H
#define UNTITLED_RULE_SPAWN_WALLS_H

#include "../Field/Playing_map.h"
template <int x,int y>
class Rule_spawn_walls{
public:
    void do_rule(Playing_map *map);
};
template <int x,int y>
void Rule_spawn_walls<x,y>::do_rule(Playing_map *map) {
    int new_x=x,new_y=y;
    if (new_x>=map->get_width())
        new_x=map->get_width()/2;
    if (new_y>=map->get_height())
        new_y=map->get_height()/2;
    for (int i=0;i<map->get_height();i++)
        map->set_wall(new_x,i);
    for (int i=0;i<map->get_height();i++)
        map->set_wall(i,new_y);
}
#endif //UNTITLED_RULE_SPAWN_WALLS_H