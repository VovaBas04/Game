//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_FIRST_LEVEL_H
#define UNTITLED_FIRST_LEVEL_H

#include "I_Level_strategy.h"
#include "Level_Generator.h"
class First_Level:public I_Level_strategy {
public:
    Playing_map * create_level(int width,int height,Move *m,Observable *ob) override;
private:
    Level_Generator<Rule_count_start_power<3>,Rule_count_start_health<3>,Rule_count_buf_health_event<1>,Rule_spawn_decrease_health_event<1>,Rule_spawn_hero<0,0>,Rule_spawn_walls<5,5>> levelGenerator;
};


#endif //UNTITLED_FIRST_LEVEL_H
