//
// Created by vova on 04.11.22.
//

#include "Find_command.h"

bool Find_command::work_something() {
    if (map.count(line)) {
        return next->work_something();
    }
    else
        return false;
}