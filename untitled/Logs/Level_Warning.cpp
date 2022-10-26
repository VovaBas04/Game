//
// Created by vova on 23.10.22.
//

#include "Level_Warning.h"
Level_Warning::Level_Warning() {
//    key=k;
    level="[WRN]";
    is_print=false;
    is_update=false;
}

Message *Level_Warning::create_Message() {
    return new Message_Warning(*this);
}