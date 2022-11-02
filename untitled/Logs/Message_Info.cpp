//
// Created by vova on 20.10.22.
//

#include "Message_Info.h"
Message_Info::Message_Info(Level &l):level_info(l) {
}

std::string Message_Info::get_message() {
    return level_info.get_level()+level_info.get_command()->do_something();
}