//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_RULE_COUNT_BUF_HEALTH_EVENT_H
#define UNTITLED_RULE_COUNT_BUF_HEALTH_EVENT_H
#include "../Field/Playing_map.h"
template <int random_spawn>
class Rule_count_buf_health_event {
public:
    void do_rule(Playing_map *field);
};
template <int random_spawn>
void Rule_count_buf_health_event<random_spawn>::do_rule(Playing_map *field) {
    srand(random_spawn);
    Abstract_factory *abs = new Factory_Characteristic(field->get_moving()->get_player(), field->get_level());
    for (int i = 0; i < field->get_height(); i++)
        for (int j = 0; j < field->get_width(); j++)
            if (!rand() % 6)
                field->set_event(j, i, abs->create_positive_event());
}

#endif //UNTITLED_RULE_COUNT_BUF_HEALTH_EVENT_H
