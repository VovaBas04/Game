//
// Created by vova on 05.10.22.
//

#include "Victory.h"
void Victory::change_play() {
    if (hero->get_egg()){
        level_info->set_command(Win);
        window->close();
    }
}
Victory::Victory(Player *h, sf::Window *w, Observer_Levels *l) {
    hero=h;
    window=w;
    level_info=l;
}