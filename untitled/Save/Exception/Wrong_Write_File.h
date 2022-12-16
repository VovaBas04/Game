//
// Created by vova on 11.12.22.
//

#ifndef UNTITLED_WRONG_WRITE_FILE_H
#define UNTITLED_WRONG_WRITE_FILE_H
#include "iostream"

class Wrong_Write_File: public std::exception{
public:
    explicit Wrong_Write_File(std::string p);
    std::string return_error();
private:
    std::string path;
};


#endif //UNTITLED_WRONG_WRITE_FILE_H
