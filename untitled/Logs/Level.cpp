//
// Created by vova on 20.10.22.
//

#include "Level.h"
void Level::set_command(int val) {
    key=val;
    is_update= true;
}
int Level::get_command() {
    return key;
}
Message *Level::update(){
    if (is_update && is_print){
        is_update= false;
        Message *m=create_Message();
        return m;
    }
    else
        return nullptr;
}
std::string Level::get_level() {
    return level;

}
void Level::set_print(bool is){
    is_print=is;
}