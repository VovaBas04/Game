//
// Created by vova on 02.10.22.
//

#ifndef UNTITLED_ABSTRACT_FACTORY_H
#define UNTITLED_ABSTRACT_FACTORY_H
#include "../Event/Event_playing.h"

class Abstract_factory {
public:
    virtual Event_playing * create_positive_event()=0;
    virtual Event_playing * create_negative_event()=0;
};


#endif //UNTITLED_ABSTRACT_FACTORY_H
