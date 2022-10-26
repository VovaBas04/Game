//
// Created by vova on 23.10.22.
//

#include "Observe_object.h"
void Observe_object::notify() {
    for (int i=0;i<levels.size();i++){
            Message *m=levels[i]->update();
            if (!m)
                continue;
        for (int j=0;j<loggers.size();j++){
                loggers[j]->set_message(m);
                loggers[j]->print();
             }
    }
}
Observe_object::Observe_object(std::vector<Observer_Levels *> l, std::vector<Logger *> log): levels(l), loggers(log) {
}