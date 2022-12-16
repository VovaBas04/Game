//
// Created by vova on 11.12.22.
//

#ifndef UNTITLED_WRONG_DATA_H
#define UNTITLED_WRONG_DATA_H
#include "iostream"

class Wrong_data: public std::exception{
public:
    explicit Wrong_data(std::string p,std::string l);
    std::string return_error();
private:
    std::string path;
    std::string line;
};


#endif //UNTITLED_WRONG_DATA_H
