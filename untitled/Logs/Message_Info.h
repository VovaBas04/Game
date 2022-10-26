//
// Created by vova on 20.10.22.
//

#ifndef UNTITLED_MESSAGE_INFO_H
#define UNTITLED_MESSAGE_INFO_H

#include "Message.h"
#include "Level_Info.h"
class Message_Info: public Message{
public:
    Message_Info(Level &l);
    std::string get_message() override;
private:
    Level &level_info;
};


#endif //UNTITLED_MESSAGE_INFO_H
