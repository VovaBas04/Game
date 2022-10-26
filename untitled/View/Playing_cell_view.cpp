//
// Created by vova on 18.09.22.
//

#include "Playing_cell_view.h"
Playing_cell_view::Playing_cell_view(Playing_cell *square,sf::Texture *t):texture(t),cell(square){
}
sf::RectangleShape Playing_cell_view::create_rectangle(){
    float side=cell->get_side(),coor_x=cell->get_x(),coor_y=cell->get_y();
    sf::RectangleShape rec=sf::RectangleShape(sf::Vector2f(side,side));
    rec.setPosition(coor_x,coor_y);
//    rec.setFillColor(color);
    rec.setOutlineThickness(1);
    rec.setOutlineColor(sf::Color::White);
    rec.setTexture(texture, false);
//    s.setTextureRect(sf::IntRect (    rec.setFillColor(color);0,0,100,100));//додумать
    return rec;
}
void Playing_cell_view::set_sprite(sf::Texture *t){
    texture=t;
}