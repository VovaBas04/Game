//
// Created by vova on 23.10.22.
//

#ifndef UNTITLED_LOGGER_FILE_H
#define UNTITLED_LOGGER_FILE_H

#include "Logger.h"
#include <iostream>
#include <fstream>
class Logger_File: public Logger{
public:
    using Logger::Logger;
    void print() override;
};


#endif //UNTITLED_LOGGER_FILE_H
