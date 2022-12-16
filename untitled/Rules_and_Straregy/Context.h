//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_CONTEXT_H
#define UNTITLED_CONTEXT_H
#include "I_Level_strategy.h"

class Context {
public:
    Context(I_Level_strategy *s);
    Playing_map * generate_level(int width,int height,Move *m,Observable *ob);
    void set_strategy(I_Level_strategy *s);
private:
    I_Level_strategy *strategy;
};


#endif //UNTITLED_CONTEXT_H
