//
// Created by vova on 05.10.22.
//

#include "Decrease_health.h"
void Decrease_health::change_play() {
    hero->set_health(hero->get_health()-1);
    level->set_command_of_prefix("[GM]",new Command_decrease_health);
}
Decrease_health::Decrease_health(Player *h, Observable *l) {
    hero=h;
    level=l;
    save_code=Health_decrease;
}