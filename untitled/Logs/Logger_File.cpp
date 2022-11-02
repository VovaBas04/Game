//
// Created by vova on 23.10.22.
//

#include "Logger_File.h"
void Logger_File::print() {
    if (out.is_open()) {
        out << *this;
    }
    else
        std::cout<<"Не работает";
}
Logger_File::Logger_File(Message *m1):Logger(m1) {
    out.open("img/log.txt",std::ios::out);
}

Logger_File::~Logger_File() {
    out.seekp(0, std::ios::beg);
    out.close();
}