//
// Created by vova on 11.12.22.
//

#include "Wrong_Write_File.h"

std::string Wrong_Write_File::return_error() {
    return "Ошибка при открытии файла на запись:"+path;
}
Wrong_Write_File::Wrong_Write_File(std::string p):path(p) {}