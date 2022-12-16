//
// Created by vova on 03.11.22.
//
#include "iostream"
#include "Reader_file.h"
Reader_file::Reader_file() {
    in.open("img/bind.txt");
}


void Reader_file::read_keyboard(Save_keyboard *s) {
    std::string line;
    while (getline(in,line)){
        parse_string(line,s);
    }
}

Reader_file::~Reader_file()  {
    in.close();
}