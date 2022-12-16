//
// Created by vova on 18.09.22.
//

#include "Playing_map_view.h"
Playing_map_view::Playing_map_view(Playing_map *m) {
    map=m;
    normal=new sf::Texture();
    wall=new sf::Texture();
    was=new sf::Texture();
    final=new sf::Texture();
    sf::Texture *load1=new sf::Texture();
    sf::Texture *save1=new sf::Texture();
    normal->loadFromFile("img/cell.png",sf::IntRect(0,100,100,100));
    wall->loadFromFile("img/cell.png",sf::IntRect(100,100,100,100));
    was->loadFromFile("img/cell.png",sf::IntRect(100,0,100,100));
    final->loadFromFile("img/cell.png",sf::IntRect(0,0,100,100));
    load1->loadFromFile("img/load.png");
    save1->loadFromFile("img/save.png");
    load=new sf::RectangleShape(sf::Vector2f(m->get_side_field(),m->get_side_field()));
    save=new sf::RectangleShape(sf::Vector2f(m->get_side_field(),m->get_side_field()));
    load->setTexture(load1);
    save->setTexture(save1);
    load->setPosition(m->get_width()*(m->get_side_field()),(m->get_height()-1)*(m->get_side_field()));
    save->setPosition(m->get_width()*(m->get_side_field()),(m->get_height()-2)*(m->get_side_field()));
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
            if (i==count_height-1 && j==count_width-1)
                show_cell.set_sprite(final);
            window->draw(show_cell.create_rectangle());
        }
    sf::Texture *texture=new sf::Texture();
    texture->loadFromFile("img/egg2.png");
    sf::Sprite *egg=new sf::Sprite();
    egg->setTexture(*texture);
    if (!cells[count_height/2][count_width/2].get_was()) {
        egg->setPosition(cells[count_height / 2][count_width / 2].get_x(),
                         cells[count_height / 2][count_width / 2].get_y());
    }
    else
        egg->setPosition(cells[count_height-1][count_width-1].get_x()+100,cells[count_height -1][count_width -1].get_y()+100);
    window->draw(*map->get_moving()->get_player()->get_point_hero());
    window->draw(*egg);
    window->draw(*load);
    window->draw(*save);
    window->display();
    window->clear();
}