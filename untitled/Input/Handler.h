//
// Created by vova on 04.11.22.
//

#ifndef UNTITLED_HANDLER_H
#define UNTITLED_HANDLER_H
#include "string"
#include "iostream"
#include "map"
#include "SFML/Graphics.hpp"
class Handler {
protected:
    Handler *next;
    std::string line;
    std::map<std::string,sf::Keyboard::Key> map;
public:
    Handler(Handler *n,std::string s,std::map<std::string,sf::Keyboard::Key> m);
    virtual bool work_something()=0;
};


#endif //UNTITLED_HANDLER_H
