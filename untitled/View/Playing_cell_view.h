//
// Created by vova on 18.09.22.
//

#ifndef UNTITLED_PLAYING_CELL_VIEW_H
#define UNTITLED_PLAYING_CELL_VIEW_H
#include "../Field/Playing_cell.h"
#include <SFML/Graphics.hpp>
class Playing_cell_view {
private:
    Playing_cell *cell;
    sf::Texture *texture;
public:
    Playing_cell_view(Playing_cell *square,sf::Texture *t);
    sf::RectangleShape create_rectangle();
    void set_sprite(sf::Texture *t);
};


#endif //UNTITLED_PLAYING_CELL_VIEW_H
