//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_OBSERVE_OBJECT_H
#define UNTITLED_OBSERVE_OBJECT_H

#include "Observable.h"
#include "Logger.h"
#include "Message_Warning.h"
#include "Message_Info.h"
#include "Message_Game.h"
#include "Logger_File.h"
#include "Logger_Console.h"
class Observe_object: public Observable{
public:
    Observe_object(std::vector<Observer_Levels *> l, std::vector<Logger *> log);
    void notify() override;
protected:
    std::vector<Observer_Levels *> levels;
    std::vector<Logger *>loggers;
};


#endif //UNTITLED_OBSERVE_OBJECT_H
