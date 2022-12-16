//
// Created by vova on 14.11.22.
//

#include "Save_keyboard.h"

std::map<std::string, std::string> Save_keyboard::get_keyboard() {
    return keyboard;
}

void Save_keyboard::set_keyboard(std::map<std::string, std::string> k) {
    keyboard=k;
}
Save_keyboard::Save_keyboard() {
    keyboard={{"Left","A"},{"Right","D"},{"Up","W"},{"Down","S"},{"Exit","Q"}};
}