//
// Created by vova on 23.10.22.
//

#include "Logger.h"
Logger::Logger(Message *m):M(m){
}
void Logger::set_message(Message *m) {
    M=m;
}