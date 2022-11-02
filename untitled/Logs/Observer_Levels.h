//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_OBSERVER_LEVELS_H
#define UNTITLED_OBSERVER_LEVELS_H

#include "Message.h"
#include "Commands.h"
class Observer_Levels {
public:
    virtual Message * update()=0;
    virtual Commands * get_command()=0;
    virtual void set_command(Commands * val)=0;
    virtual std::string get_level()=0;
};


#endif //UNTITLED_OBSERVER_LEVELS_H
