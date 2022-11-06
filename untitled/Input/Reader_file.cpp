//
// Created by vova on 03.11.22.
//
#include "iostream"
#include "Reader_file.h"
Reader_file::Reader_file() {
    in.open("img/bind.txt");
}


void Reader_file::read_keyboard() {
    std::string line;
    while (getline(in,line)){
        parse_string(line);
    }
}

Reader_file::~Reader_file()  {
    in.close();
}