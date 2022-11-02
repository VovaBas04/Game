//
// Created by vova on 28.09.22.
//

#ifndef UNTITLED_BUF_HEALTH_H
#define UNTITLED_BUF_HEALTH_H
#include "Event_charasteristics.h"
#include "../Logs/Command_Buf.h"
class Buf_health:public Event_charasteristics {
public:
    Buf_health(Player *h, Observable *l);
    void change_play() override;
};


#endif //UNTITLED_BUF_HEALTH_H
