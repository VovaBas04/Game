//
// Created by vova on 11.12.22.
//

#ifndef UNTITLED_LOAD_DATA_H
#define UNTITLED_LOAD_DATA_H

#include "../Field/Playing_map.h"
#include <fstream>
#include "Exception/Wrong_Read_File.h"
#include "Exception/Wrong_data.h"
class Load_data {
public:
    Load_data(Playing_map *map);
    void load_characteristic(std::string path);
    void load_position(std::string path);
    void load_cells(std::string path);
private:
    Playing_map *field;
};


#endif //UNTITLED_LOAD_DATA_H
