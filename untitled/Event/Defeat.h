//
// Created by vova on 05.10.22.
//

#ifndef UNTITLED_DEFEAT_H
#define UNTITLED_DEFEAT_H

#include "Game_over.h"
class Defeat: public Game_over{
public:
    void change_play() override;
    Defeat(Player *h, sf::Window *w, Observer_Levels *l);
};


#endif //UNTITLED_DEFEAT_H
