//
// Created by vova on 04.11.22.
//

#ifndef UNTITLED_FIND_COMMAND_H
#define UNTITLED_FIND_COMMAND_H
#include "Handler.h"
#include "Find_Keyboard.h"
class Find_command: public Handler{
public:
    using Handler::Handler;
    bool work_something() override;
};


#endif //UNTITLED_FIND_COMMAND_H
