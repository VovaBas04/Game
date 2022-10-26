//
// Created by vova on 20.10.22.
//

#include "Message_Info.h"
Message_Info::Message_Info(Level &l):level_info(l) {
}

std::string Message_Info::get_message() {
    switch (level_info.get_command()){
        case Win:
            return level_info.get_level()+"you victory";
        case Lose:
            return level_info.get_level()+"you defeat";
        case Start:
            return level_info.get_level()+"game start";
        default:
            return "Error!!!Unknown command";
    }
}