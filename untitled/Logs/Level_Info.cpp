//
// Created by vova on 23.10.22.
//

#include "Level_Info.h"
Level_Info::Level_Info() {
    level="[INF]";
    is_print=false;
    is_update=false;
}

Message *Level_Info::create_Message() {
    return new Message_Info(*this);
}