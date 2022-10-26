//
// Created by vova on 05.10.22.
//

#include "Decrease_health.h"
void Decrease_health::change_play() {
    hero->set_health(hero->get_health()-1);
    level->set_command(Remove_health);
}
Decrease_health::Decrease_health(Player *h, Observer_Levels *l) {
    hero=h;
    level=l;
}