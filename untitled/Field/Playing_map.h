//
// Created by vova on 07.09.22.
//

#ifndef UNTITLED_PLAYING_MAP_H
#define UNTITLED_PLAYING_MAP_H
#include "SFML/Graphics.hpp"
#include "Playing_cell.h"
#include <vector>
#include "map"
#include "iostream"
#include "../Factory/Factory_Characteristic.h"
#include "../Factory/Factory_Game.h"
#include "../Factory/Factory_Map.h"
#include "../Logs/Level.h"
class Playing_map {
public:
    Playing_map(int w, int h,Move *m,std::vector<Observer_Levels *> l);
    Playing_map(Move *m,std::vector<Observer_Levels *> l);
    Playing_map(const Playing_map &map);
    Playing_map& operator=(const Playing_map &map);
    Playing_map (Playing_map &&map);
    Playing_map& operator=(Playing_map&& obj);
    int get_width();
    int get_height();
    std::vector<std::vector<Playing_cell>> render_map();
    int get_side_field();
    Move * get_moving();
    std::vector<Playing_cell *> near_fields(int i, int j);
    void set_window(sf::Window *w);
private:
    int count_width;
    int count_height;
    const float side_field=100;
    std::vector<bool> dont_move(std::vector<Playing_cell *>);
    std::vector<std::vector<Playing_cell>>fields;
    Move *move;
    sf::Window *window;
    std::vector<Observer_Levels *> levels;
};


#endif //UNTITLED_PLAYING_MAP_H
