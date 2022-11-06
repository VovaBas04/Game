//
// Created by vova on 04.11.22.
//

#ifndef UNTITLED_FIND_KEYBOARD_H
#define UNTITLED_FIND_KEYBOARD_H

#include "Handler.h"
class Find_Keyboard: public Handler{
public:
    using Handler::Handler;
    bool work_something() override;
};


#endif //UNTITLED_FIND_KEYBOARD_H
