//
// Created by vova on 11.12.22.
//

#ifndef UNTITLED_WRONG_TRANSACTION_H
#define UNTITLED_WRONG_TRANSACTION_H
#include "../Field/Playing_map.h"

class Wrong_Transaction {
public:
    explicit Wrong_Transaction(Playing_map map);
    Playing_map rollback();
private:
    Playing_map field;
};


#endif //UNTITLED_WRONG_TRANSACTION_H
