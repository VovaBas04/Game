//
// Created by vova on 20.10.22.
//

#include "Message_Game.h"
Message_Game::Message_Game(Level &l):level_game(l) {}

std::string Message_Game::get_message() {
    switch (level_game.get_command()){
        case Update_health:
            return level_game.get_level()+"your health buf";
        case Remove_power:
            return level_game.get_level()+"your power decrease";
        case Remove_health:
            return level_game.get_level()+"your health decrease";
        case Destroy:
            return level_game.get_level()+"destroy wall near";
        case Create:
            return level_game.get_level()+"create wall near";
        default:
            std::cout<<level_game.get_command();
            return "Error!!!Unknown command";

    }
}