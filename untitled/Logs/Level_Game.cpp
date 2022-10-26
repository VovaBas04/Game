//
// Created by vova on 23.10.22.
//

#include "Level_Game.h"
Level_Game::Level_Game(){
    level="[GM]";
    is_print= false;
    is_update=false;
}

Message *Level_Game::create_Message() {
    return new Message_Game(*this);
}