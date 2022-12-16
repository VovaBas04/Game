//
// Created by vova on 11.12.22.
//

#include "Wrong_Transaction.h"
Wrong_Transaction::Wrong_Transaction(Playing_map map): field(map) {
}

Playing_map Wrong_Transaction::rollback() {
    return field;
}