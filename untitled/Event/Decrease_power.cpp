//
// Created by vova on 28.09.22.
//

#include "Decrease_power.h"
void Decrease_power::change_play() {
    hero->set_power(hero->get_power()-1);
    level->set_command_of_prefix("[GM]",new Command_decrease_power);
}
Decrease_power::Decrease_power(Player *h, Observable *l) {
    hero=h;
    level=l;
}