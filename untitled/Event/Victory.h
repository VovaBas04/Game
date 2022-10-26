//
// Created by vova on 05.10.22.
//

#ifndef UNTITLED_VICTORY_H
#define UNTITLED_VICTORY_H

#include "Game_over.h"
class Victory: public Game_over{
public:
    void change_play() override;
    Victory(Player *h, sf::Window *w, Observer_Levels *l);
};


#endif //UNTITLED_VICTORY_H
