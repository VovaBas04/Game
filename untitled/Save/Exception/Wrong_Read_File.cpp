//
// Created by vova on 11.12.22.
//

#include "Wrong_Read_File.h"
Wrong_Read_File::Wrong_Read_File(std::string p):path(p) {}
std::string Wrong_Read_File::return_error() {
    return "Ошибка при открытии файла на чтение:"+path;
}