//
// Created by vova on 05.10.22.
//

#ifndef UNTITLED_DECREASE_HEALTH_H
#define UNTITLED_DECREASE_HEALTH_H
#include "Event_charasteristics.h"

class Decrease_health: public Event_charasteristics{
public:
    void change_play() override;
    Decrease_health(Player *h, Observer_Levels *l);
};


#endif //UNTITLED_DECREASE_HEALTH_H
