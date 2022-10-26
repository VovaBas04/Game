//
// Created by vova on 06.10.22.
//

#ifndef UNTITLED_FACTORY_CHARACTERISTIC_H
#define UNTITLED_FACTORY_CHARACTERISTIC_H
#include "Abstract_factory.h"
#include "../Event/Decrease_power.h"
#include "../Event/Decrease_health.h"
#include "../Event/Buf_health.h"

class Factory_Characteristic: public Abstract_factory{
public:
    Event_playing * create_positive_event() override;
    Event_playing * create_negative_event() override;
    Factory_Characteristic(Player *h, Observer_Levels *l);
private:
    Player *hero;
    Observer_Levels *level;
};


#endif //UNTITLED_FACTORY_CHARACTERISTIC_H
