//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_RULE_COUNT_START_POWER_H
#define UNTITLED_RULE_COUNT_START_POWER_H
#include "../Field/Playing_map.h"
template <int power>
class Rule_count_start_power{
public:
    void do_rule(Playing_map *map);
};
template <int power>
void Rule_count_start_power<power>::do_rule(Playing_map *map) {
    Player *hero=map->get_moving()->get_player();
    hero->set_power(power);
}
#endif //UNTITLED_RULE_COUNT_START_POWER_H