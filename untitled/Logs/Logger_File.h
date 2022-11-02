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

    explicit Logger_File(Message *m1);

    void print() override;
    ~Logger_File() override;
private:
    std::fstream out;
};


#endif //UNTITLED_LOGGER_FILE_H
