//
// Created by vova on 30.10.22.
//

#ifndef UNTITLED_COMMANDS_H
#define UNTITLED_COMMANDS_H
#include "iostream"
class Commands {
public:
    Commands()=default;
    virtual std::string do_something()=0;
};


#endif //UNTITLED_COMMANDS_H
