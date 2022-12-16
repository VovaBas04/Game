//
// Created by vova on 11.12.22.
//

#ifndef UNTITLED_WRONG_READ_FILE_H
#define UNTITLED_WRONG_READ_FILE_H
#include "iostream"

class Wrong_Read_File: public std::exception{
public:
    explicit Wrong_Read_File(std::string p);
    std::string return_error();
private:
    std::string path;
};


#endif //UNTITLED_WRONG_READ_FILE_H
