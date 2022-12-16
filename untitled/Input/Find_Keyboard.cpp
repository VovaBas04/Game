//
// Created by vova on 04.11.22.
//

#include "Find_Keyboard.h"

bool Find_Keyboard::work_something() {
    if (map.count(line)) {
        next->work_something();
    }
    else
        return false;
}
Find_Keyboard::Find_Keyboard(Handler *n, std::string s, std::map<std::string, sf::Keyboard::Key> m): Handler(n,s),map(m) {}