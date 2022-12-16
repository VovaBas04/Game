//
// Created by vova on 04.11.22.
//

#ifndef UNTITLED_FIND_COMMAND_H
#define UNTITLED_FIND_COMMAND_H
#include "Handler.h"
#include "Find_Keyboard.h"
class Find_command: public Handler{
public:
    Find_command(Handler *n,std::string s,std::map<std::string,std::string> m);
    bool work_something() override;
private:
    std::map<std::string,std::string> map;
};


#endif //UNTITLED_FIND_COMMAND_H
