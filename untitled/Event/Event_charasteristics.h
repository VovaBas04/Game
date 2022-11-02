//
// Created by vova on 28.09.22.
//

#ifndef UNTITLED_EVENT_CHARASTERISTICS_H
#define UNTITLED_EVENT_CHARASTERISTICS_H
#include "Event_playing.h"
#include "../Logs/Level_Game.h"
class Event_charasteristics: public Event_playing{
public:
//    virtual bool is_max_count(int characteristic)=0;
protected:
    Player *hero;
    Observable *level;
};


#endif //UNTITLED_EVENT_CHARASTERISTICS_H
