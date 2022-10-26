//
// Created by vova on 23.10.22.
//

#include "Logger_File.h"
void Logger_File::print() {
    std::ofstream out;
    out.open("img/log.txt",std::ios::app);
    if (out.is_open())
        out<<*this;
    else
        std::cout<<"Не работает";
}