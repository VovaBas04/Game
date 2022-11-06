//
// Created by vova on 04.11.22.
//

#include "Cmp_values.h"

bool Cmp_values::work_something() {
    std::cout<<"Тут";
    for (auto [key,value]:map){
        if (key==line)
            return false;
    }
    return next->work_something();
}