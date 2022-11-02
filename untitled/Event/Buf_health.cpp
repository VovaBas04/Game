//
// Created by vova on 28.09.22.
//

#include "Buf_health.h"
void Buf_health::change_play() {
    hero->set_health(hero->get_health()+1);
    level->set_command_of_prefix("[GM]",new Command_Buf);
}
Buf_health::Buf_health(Player *h, Observable *l) {
    hero=h;
    level=l;
}