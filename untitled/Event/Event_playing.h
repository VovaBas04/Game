//
// Created by vova on 13.09.22.
//

#ifndef UNTITLED_EVENT_PLAYING_H
#define UNTITLED_EVENT_PLAYING_H
#include "../Play_mechanic/Player.h"
#include "iostream"
#include "../Logs/Observable.h"
class Event_playing {
public:
    virtual void change_play()=0;
};


#endif //UNTITLED_EVENT_PLAYING_H
