//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_I_LEVEL_STRATEGY_H
#define UNTITLED_I_LEVEL_STRATEGY_H
#include "../Field/Playing_map.h"
#include "Rule_count_buf_health_event.h"
#include "Rule_count_start_health.h"
#include "Rule_count_start_power.h"
#include "Rule_spawn_decrease_health_event.h"
#include "Rule_spawn_hero.h"
#include "Rule_spawn_walls.h"
class I_Level_strategy {
public:
    virtual Playing_map * create_level(int width,int height,Move *m,Observable *ob)=0;
};


#endif //UNTITLED_I_LEVEL_STRATEGY_H
