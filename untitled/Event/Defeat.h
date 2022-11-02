//
// Created by vova on 05.10.22.
//

#ifndef UNTITLED_DEFEAT_H
#define UNTITLED_DEFEAT_H

#include "Game_over.h"
#include "../Logs/Command_defeat.h"
class Defeat: public Game_over{
public:
    void change_play() override;
    Defeat(Player *h, sf::Window *w, Observable *l);
};


#endif //UNTITLED_DEFEAT_H
