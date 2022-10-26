//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_OBSERVABLE_H
#define UNTITLED_OBSERVABLE_H
#include "vector"
#include "Message.h"
#include "Level.h"
class Observable{
public:
    virtual  void notify()=0;
};


#endif //UNTITLED_OBSERVABLE_H
