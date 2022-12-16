//
// Created by vova on 04.11.22.
//

#include "Find_command.h"

bool Find_command::work_something() {
    if (map.count(line)) {
        return next->work_something();
    }
    else
        return false;
}
Find_command::Find_command(Handler *n, std::string s, std::map<std::string, std::string> m): Handler(n,s),map(m) {}