//
// Created by vova on 28.09.22.
//

#ifndef UNTITLED_DECREASE_POWER_H
#define UNTITLED_DECREASE_POWER_H
#include "Event_charasteristics.h"
#include "../Logs/Command_decrease_power.h"
class Decrease_power:public Event_charasteristics {
public:
    Decrease_power(Player *h, Observable *l);
    void change_play() override;
};


#endif //UNTITLED_DECREASE_POWER_H
