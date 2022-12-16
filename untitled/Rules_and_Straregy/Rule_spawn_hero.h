//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_RULE_SPAWN_HERO_H
#define UNTITLED_RULE_SPAWN_HERO_H
#include "../Play_mechanic/Move.h"
#include "../Field/Playing_map.h"
template <int x,int y>
class Rule_spawn_hero {
public:
    void do_rule(Playing_map *map);
};
template <int x,int y>
void Rule_spawn_hero<x, y>::do_rule(Playing_map *map) {
    Move *move=map->get_moving();
    if (x>=map->get_width() || y>=map->get_height())
        move->set_position((map->get_width()-1)*map->get_side_field(),map->get_height()-1*map->get_side_field());
    else
        move->set_position(x*map->get_side_field(),y*map->get_side_field());
}

#endif //UNTITLED_RULE_SPAWN_HERO_H
