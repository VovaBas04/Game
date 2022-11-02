//
// Created by vova on 30.10.22.
//

#ifndef UNTITLED_COMMAND_DECREASE_POWER_H
#define UNTITLED_COMMAND_DECREASE_POWER_H

#include "Commands.h"
class Command_decrease_power: public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};


#endif //UNTITLED_COMMAND_DECREASE_POWER_H
