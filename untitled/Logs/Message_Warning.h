//
// Created by vova on 20.10.22.
//

#ifndef UNTITLED_MESSAGE_WARNING_H
#define UNTITLED_MESSAGE_WARNING_H

#include "Message.h"
#include "Level_Warning.h"
class Message_Warning: public Message{
public:
    Message_Warning(Level &l);
    std::string get_message() override;
private:
    Level &level_warning;
};


#endif //UNTITLED_MESSAGE_WARNING_H
