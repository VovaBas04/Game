//
// Created by vova on 06.10.22.
//

#ifndef UNTITLED_FACTORY_GAME_H
#define UNTITLED_FACTORY_GAME_H

#include "Abstract_factory.h"
#include "../Event/Victory.h"
#include "../Event/Defeat.h"
class Factory_Game: public Abstract_factory{
public:
    Event_playing * create_positive_event() override;
    Event_playing * create_negative_event() override;
    Factory_Game(Player *h, sf::Window *w, Observable* l);
private:
    Player *hero;
    sf::Window *window;
    Observable *level_info;
};


#endif //UNTITLED_FACTORY_GAME_H
