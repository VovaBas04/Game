//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_LEVEL_INFO_H
#define UNTITLED_LEVEL_INFO_H
#include "Level.h"
#include "Message_Info.h"
class Level_Info:public Level {
public:
    Level_Info();
    Message * create_Message() override;
};


#endif //UNTITLED_LEVEL_INFO_H
