//
// Created by vova on 18.09.22.
//

#ifndef UNTITLED_PLAYING_MAP_VIEW_H
#define UNTITLED_PLAYING_MAP_VIEW_H
#include "../Field/Playing_map.h"
#include "Playing_cell_view.h"
#include <SFML/Graphics.hpp>
class Playing_map_view {
public:
    Playing_map_view(Playing_map *m);
    void show_map(sf::RenderWindow *window);
private:
    Playing_map *map;
    sf::Texture *wall;
    sf::Texture *normal;
    sf::Texture *was;
};


#endif //UNTITLED_PLAYING_MAP_VIEW_H
