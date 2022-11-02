//
// Created by vova on 06.10.22.
//

#include "Factory_Game.h"
Event_playing * Factory_Game::create_positive_event() {
    Event_playing *e=new Victory(hero,window,level_info);
    return e;
}
Event_playing * Factory_Game::create_negative_event(){
    Event_playing *e=new Defeat(hero,window,level_info);
    return e;
}
Factory_Game::Factory_Game(Player *h, sf::Window *w, Observable *l): hero(h), window(w), level_info(l){}