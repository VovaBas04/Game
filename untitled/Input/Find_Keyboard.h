//
// Created by vova on 04.11.22.
//

#ifndef UNTITLED_FIND_KEYBOARD_H
#define UNTITLED_FIND_KEYBOARD_H

#include "Handler.h"
class Find_Keyboard: public Handler{
public:
    Find_Keyboard(Handler *n,std::string s,std::map<std::string,sf::Keyboard::Key> m);
    bool work_something() override;
private:
    std::map<std::string,sf::Keyboard::Key> map;
};


#endif //UNTITLED_FIND_KEYBOARD_H
