//
// Created by vova on 30.10.22.
//

#ifndef UNTITLED_COMMAND_VICTORY_H
#define UNTITLED_COMMAND_VICTORY_H

#include "Commands.h"
class Command_Victory : public Commands{
public:
    using Commands::Commands;
    std::string do_something() override;
};


#endif //UNTITLED_COMMAND_VICTORY_H
