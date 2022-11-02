//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_OBSERVABLE_H
#define UNTITLED_OBSERVABLE_H
#include "vector"
#include "Message.h"
#include "Level.h"
class Observable{
public:
    virtual  void notify()=0;
    virtual void set_command_of_prefix(std::string prefix,Commands *command)=0;
};


#endif //UNTITLED_OBSERVABLE_H
