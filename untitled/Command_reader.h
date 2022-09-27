//
// Created by vova on 19.09.22.
//

#ifndef UNTITLED_COMMAND_READER_H
#define UNTITLED_COMMAND_READER_H

#include "iostream"
#include "vector"
#include "map"
#include "SFML/Graphics.hpp"
#define MAX_LEN 1080
class Command_reader {
public:
    Command_reader();
    void create_texture(std::string png);
    void set_count();
    int keyboard_move();
    int get_width();
    int get_height();
    sf::Sprite *get_sprite();
private:
    enum {LEFT_UP_X,LEFT_UP_Y,RIGHT_DOWN_X,RIGHT_DOWN_Y};
    enum {LEFT,RIGHT,DOWN,UP,STOP};
    std::map<std::string,std::vector<int>> dict_for_texture;
    sf::Sprite point_hero;
    int count_width;
    int count_height;
};


#endif //UNTITLED_COMMAND_READER_H
