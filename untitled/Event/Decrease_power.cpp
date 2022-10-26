//
// Created by vova on 28.09.22.
//

#include "Decrease_power.h"
void Decrease_power::change_play() {
    hero->set_power(hero->get_power()-1);
    level->set_command(Remove_power);
}
Decrease_power::Decrease_power(Player *h, Observer_Levels *l) {
    hero=h;
    level=l;
}