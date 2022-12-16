//
// Created by vova on 11.12.22.
//

#include "Wrong_data.h"

std::string Wrong_data::return_error() {
    return "Неккоректные данные в файле:"+path+"\nстроке:"+line;
}
Wrong_data::Wrong_data(std::string p, std::string l):path(p),line(l) {
}