//
// Created by vova on 20.10.22.
//

#include "Message_Warning.h"
Message_Warning::Message_Warning(Level &l):level_warning(l){
}

std::string Message_Warning::get_message() {
    switch (level_warning.get_command()) {
        case No_move:
            return level_warning.get_level()+"you dont move";
        case Constructor:
            return level_warning.get_level()+"your constructor have wrongs";
        default:
            return "Error!!!Unknown command";
    }
}