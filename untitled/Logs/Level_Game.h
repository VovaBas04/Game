//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_LEVEL_GAME_H
#define UNTITLED_LEVEL_GAME_H

#include "Level.h"
#include "Message_Game.h"
class Level_Game: public Level{
public:
    Level_Game();
    Message * create_Message() override;
};


#endif //UNTITLED_LEVEL_GAME_H
