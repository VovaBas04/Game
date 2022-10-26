//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_LOGGER_H
#define UNTITLED_LOGGER_H
#include "iostream"
#include "Message.h"
class Logger {
public:
    Logger(Message *m);
    virtual void print()=0;
    friend std::ostream& operator<<(std::ostream& out, const Logger &obj){
        out<<obj.M->get_message()<<"\n";
        return out;
    }
    void set_message(Message *m);
protected:
    Message *M;
};


#endif //UNTITLED_LOGGER_H
