//
// Created by vova on 20.10.22.
//

#ifndef UNTITLED_MESSAGE_GAME_H
#define UNTITLED_MESSAGE_GAME_H

#include "Message.h"
#include "Level_Game.h"
class Message_Game: public Message{
public:
    Message_Game(Level &l);
    std::string get_message() override;
private:
    Level &level_game;
};


#endif //UNTITLED_MESSAGE_GAME_H
