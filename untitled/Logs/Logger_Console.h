//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_LOGGER_CONSOLE_H
#define UNTITLED_LOGGER_CONSOLE_H

#include "Logger.h"
class Logger_Console: public Logger{
public:
    using Logger::Logger;
    void print() override;
    ~Logger_Console() override= default;;
};


#endif //UNTITLED_LOGGER_CONSOLE_H
