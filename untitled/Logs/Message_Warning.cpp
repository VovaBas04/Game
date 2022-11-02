//
// Created by vova on 20.10.22.
//

#include "Message_Warning.h"
Message_Warning::Message_Warning(Level &l):level_warning(l){
}

std::string Message_Warning::get_message() {
    return level_warning.get_level()+level_warning.get_command()->do_something();
}