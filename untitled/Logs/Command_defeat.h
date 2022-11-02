//
// Created by vova on 30.10.22.
//

#ifndef UNTITLED_COMMAND_DEFEAT_H
#define UNTITLED_COMMAND_DEFEAT_H

#include "Commands.h"
class Command_defeat: public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};


#endif //UNTITLED_COMMAND_DEFEAT_H
