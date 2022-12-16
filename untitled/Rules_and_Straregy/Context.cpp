//
// Created by vova on 21.11.22.
//

#include "Context.h"
Context::Context(I_Level_strategy *s):strategy(s) {
}

Playing_map * Context::generate_level(int width,int height,Move *m,Observable *ob) {
    return strategy->create_level(width,height,m,ob);
}

void Context::set_strategy(I_Level_strategy *s) {
    strategy=s;
}