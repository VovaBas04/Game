//
// Created by vova on 03.11.22.
//

#ifndef UNTITLED_READER_H
#define UNTITLED_READER_H
#include <map>
#include "SFML/Graphics.hpp"
#include "Find_Keyboard.h"
#include "Find_command.h"
#include "Save_keyboard.h"
#include "Cmp_Values.h"
#include "Map_Sfml.h"
class Reader {
public:
    virtual void read_keyboard(Save_keyboard *hold)=0;
    virtual ~Reader()=default;
protected:
    void parse_string(std::string s1,Save_keyboard *hold);
};


#endif //UNTITLED_READER_H
