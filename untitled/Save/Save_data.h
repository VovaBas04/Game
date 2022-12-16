//
// Created by vova on 11.12.22.
//

#ifndef UNTITLED_SAVE_DATA_H
#define UNTITLED_SAVE_DATA_H

#include "../Field/Playing_map.h"
#include <fstream>
#include "Exception/Wrong_Write_File.h"
class Save_data {
public:
    Save_data(Playing_map *m);
    void save_cells(std::string path);
    void save_position(std::string path);
    void save_characteristics(std::string path);
private:
    Playing_map *field;
};


#endif //UNTITLED_SAVE_DATA_H
