//
// Created by vova on 20.10.22.
//
#ifndef UNTITLED_LEVEL_H
#define UNTITLED_LEVEL_H
#include "iostream"
#include "Observer_Levels.h"
#include "Message.h"
#include "Commands.h"
class Level: public Observer_Levels{
public:
    Commands * get_command();
    Message *update() override;
    void set_command(Commands *key);
    std::string get_level();
    virtual Message * create_Message()=0;
protected:
    Commands *key;
    std::string level;
    bool is_update;
};



#endif //UNTITLED_LEVEL_H
