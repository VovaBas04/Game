//
// Created by vova on 19.09.22.
//

#ifndef UNTITLED_COMMAND_READER_H
#define UNTITLED_COMMAND_READER_H

#include "iostream"
#include "vector"
#include "map"
#include "Logs/Level_Warning.h"
#include "Logs/Level_Game.h"
#include "Logs/Level_Info.h"
#include "SFML/Graphics.hpp"
#include "Logs/Logger_File.h"
#include "Logs/Logger_Console.h"
#include "Input/Reader.h"
#include "Input/Save_keyboard.h"
#include "Input/Map_Sfml.h"
#define MAX_LEN 1080
class Command_reader {
public:
    Command_reader(Save_keyboard *s);
    void create_texture(std::string png);
    void set_count();
    void set_levels(std::vector<Observer_Levels *> *levels);
    int keyboard_move(sf::Event *e);
    int get_width();
    int get_height();
    bool is_end();
    int get_level_for_play();
    void set_loggers(std::vector<Logger *> &l);
    sf::Sprite *get_sprite();
private:

    enum {LEFT_UP_X,LEFT_UP_Y,RIGHT_DOWN_X,RIGHT_DOWN_Y};
    enum {LEFT,RIGHT,DOWN,UP,STOP};
    std::map<std::string,std::vector<int>> dict_for_texture;
    sf::Sprite point_hero;
    int count_width;
    int count_height;
    bool is_pressed;
    Save_keyboard *hold;
    std::map<std::string,sf::Keyboard::Key> bindChar;
    void set_level(std::string s,std::vector<Observer_Levels *> *levels);
};


#endif //UNTITLED_COMMAND_READER_H
