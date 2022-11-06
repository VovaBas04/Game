//
// Created by vova on 03.11.22.
//

#ifndef UNTITLED_READER_FILE_H
#define UNTITLED_READER_FILE_H
#include "Reader.h"
#include <fstream>
class Reader_file: public Reader{
public:
    void read_keyboard() override;
    ~Reader_file() override;
    Reader_file();
private:
    std::ifstream in;
};


#endif //UNTITLED_READER_FILE_H
