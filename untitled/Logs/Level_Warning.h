//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_LEVEL_WARNING_H
#define UNTITLED_LEVEL_WARNING_H
#include "Level.h"
#include "Message_Warning.h"
class Level_Warning: public Level{
public:
    Level_Warning();
    Message * create_Message() override;
};


#endif //UNTITLED_LEVEL_WARNING_H
