//
// Created by vova on 03.11.22.
//

#include "Reader.h"

void Reader::parse_string(std::string s,Save_keyboard *hold) {
    int d=s.find(':');
    std::map<std::string ,std::string> keyboard=hold->get_keyboard();
    std::string s1=s.substr(0,d);
    std::string s2=s.substr(d+1);
    Map_Sfml *m=new Map_Sfml;
    Handler *h3=new Cmp_Values(nullptr,s2,keyboard);
    Handler *h2=new Find_Keyboard(h3,s2,m->bindChar);
    Handler *h1=new Find_command(h2,s1,keyboard);
    if (h1->work_something())
        keyboard[s1]=s2;
    hold->set_keyboard(keyboard);
}