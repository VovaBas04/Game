//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_SECOND_LEVEL_H
#define UNTITLED_SECOND_LEVEL_H
#include "I_Level_strategy.h"
#include "Level_Generator.h"
class Second_Level: public I_Level_strategy{
public:
    Playing_map * create_level(int width,int height,Move *m,Observable *ob) override;
private:
    Level_Generator<Rule_count_start_power<2>,Rule_count_start_health<2>,Rule_spawn_decrease_health_event<2>,Rule_count_buf_health_event<200>,Rule_spawn_hero<0,5>,Rule_spawn_walls<2,2>> levelGenerator;
};


#endif //UNTITLED_SECOND_LEVEL_H
