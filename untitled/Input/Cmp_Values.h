//
// Created by vova on 14.11.22.
//

#ifndef UNTITLED_CMP_VALUES_H
#define UNTITLED_CMP_VALUES_H

#include "Handler.h"
class Cmp_Values: public Handler{
public:
    Cmp_Values(Handler *n,std::string s,std::map<std::string,std::string> m);
    bool work_something() override;
private:
    std::map<std::string,std::string> map;
};


#endif //UNTITLED_CMP_VALUES_H
