//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_RULE_COUNT_START_HEALTH_H
#define UNTITLED_RULE_COUNT_START_HEALTH_H

#include "../Field/Playing_map.h"
template <int health>
class Rule_count_start_health {
public:
    void do_rule(Playing_map *map);
};
template <int health>
void Rule_count_start_health<health>::do_rule(Playing_map *map) {
    Player *hero=map->get_moving()->get_player();
    hero->set_health(health);
}


#endif //UNTITLED_RULE_COUNT_START_HEALTH_H
