//
// Created by vova on 18.09.22.
//

#include "Playing_map_view.h"
Playing_map_view::Playing_map_view(Playing_map *m) {
    map=m;
    normal=new sf::Texture();
    wall=new sf::Texture();
    was=new sf::Texture();
    normal->loadFromFile("img/cell.png",sf::IntRect(0,100,100,100));
    wall->loadFromFile("img/cell.png",sf::IntRect(100,100,100,100));
    was->loadFromFile("img/cell.png",sf::IntRect(100,0,100,100));
}

void Playing_map_view::show_map(sf::RenderWindow *window) {
    std::vector<std::vector<Playing_cell>> cells=map->render_map();
    int count_width=map->get_width(),count_height=map->get_height();
    for (int i=0;i<count_height;i++)
        for (int j=0;j<count_width;j++) {
            Playing_cell_view show_cell=Playing_cell_view(&cells[i][j],normal);
            if (!cells[i][j].get_passability())
                show_cell.set_sprite(wall);
            if (cells[i][j].get_was())
                show_cell.set_sprite(was);
            window->draw(show_cell.create_rectangle());
        }
    sf::Texture *texture=new sf::Texture();
    texture->loadFromFile("img/egg2.png");
    sf::Sprite *egg=new sf::Sprite();
    egg->setTexture(*texture);
    egg->setPosition(cells[count_height-1][count_width-1].get_x(),cells[count_height-1][count_width-1].get_y());
    window->draw(*map->get_moving()->get_player()->get_point_hero());
    window->draw(*egg);
    window->display();
    window->clear();
}