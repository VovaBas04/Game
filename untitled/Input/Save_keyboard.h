//
// Created by vova on 14.11.22.
//

#ifndef UNTITLED_SAVE_KEYBOARD_H
#define UNTITLED_SAVE_KEYBOARD_H

#include "map"
class Save_keyboard {
public:
    Save_keyboard();
    void set_keyboard(std::map<std::string,std::string> k);
    std::map<std::string,std::string> get_keyboard();
private:
    std::map<std::string,std::string> keyboard;
};


#endif //UNTITLED_SAVE_KEYBOARD_H
