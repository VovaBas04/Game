//
// Created by vova on 20.10.22.
//

#include "Message_Game.h"
Message_Game::Message_Game(Level &l):level_game(l) {}

std::string Message_Game::get_message() {
    return level_game.get_level()+level_game.get_command()->do_something();
}