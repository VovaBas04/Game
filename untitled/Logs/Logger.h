//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_LOGGER_H
#define UNTITLED_LOGGER_H
#include "iostream"
#include "Message.h"
#include "fstream"
#include <iostream>
class Logger {
public:
    explicit Logger(Message *m);
    virtual void print()=0;
    friend std::ostream& operator<<(std::ostream& out2, const Logger &obj){
        out2<<obj.M->get_message()<<"\n";
        return out2;
    }
    virtual ~Logger()= default;;
    void set_message(Message *m);
protected:
    Message *M;
};


#endif //UNTITLED_LOGGER_H
