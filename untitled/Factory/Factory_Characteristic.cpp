//
// Created by vova on 06.10.22.
//

#include "Factory_Characteristic.h"
Event_playing * Factory_Characteristic::create_positive_event() {
    Event_playing *e=new  Buf_health(hero,level);
    return e;
}
Event_playing * Factory_Characteristic::create_negative_event(){
    Event_playing *e;
    if (rand()%7) {
        e = new  Decrease_health(hero,level);
    }
    else {
        e = new Decrease_power(hero,level);
    }
    return e;
}
Factory_Characteristic::Factory_Characteristic(Player *h, Observable *l): hero(h), level(l) {}