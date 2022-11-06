//
// Created by vova on 04.11.22.
//

#include "Find_Keyboard.h"

bool Find_Keyboard::work_something() {
    if (map.count(line))
        return true;
    else
        return false;
}