//
// Created by vova on 05.10.22.
//

#include "Defeat.h"
void Defeat::change_play() {
    if (hero->get_health()<=0)
        {
        level_info->set_command(Lose);
        window->close();
        }
}
Defeat::Defeat(Player *h, sf::Window *w, Observer_Levels *l) {
    hero=h;
    window=w;
    level_info=l;
}