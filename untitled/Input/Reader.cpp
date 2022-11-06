//
// Created by vova on 03.11.22.
//

#include "Reader.h"

std::map<std::string, sf::Keyboard::Key> Reader::get_keyboard() {
    return keyboard;
}
void Reader::parse_string(std::string s) {
    int d=s.find(':');
    std::string s1=s.substr(0,d);
    std::string s2=s.substr(d+1);
    Handler *h3=new Find_Keyboard(nullptr,s2,bindChar);
    Handler *h2=new Cmp_values(h3,s2,keyboard);
    Handler *h1=new Find_command(h2,s1,keyboard);
    if (h1->work_something())
        keyboard[s1]=bindChar[s2];
}