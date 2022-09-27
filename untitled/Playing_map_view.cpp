//
// Created by vova on 18.09.22.
//

#include "Playing_map_view.h"
Playing_map_view::Playing_map_view(Playing_map *m) {
    map=m;
}

void Playing_map_view::show_map(sf::RenderWindow *window) {
    std::vector<std::vector<Playing_cell>> cells=map->render_map();
    int count_width=map->get_width(),count_height=map->get_height();
    for (int i=0;i<count_height;i++)
        for (int j=0;j<count_width;j++) {
            Playing_cell_view show_cell=Playing_cell_view(&cells[i][j],sf::Color::Black);
            if (cells[i][j].is_here(map->get_moving()))
                show_cell.set_color(sf::Color::Red);
            if (!cells[i][j].get_passability())
                show_cell.set_color(sf::Color::Green);
            window->draw(show_cell.create_rectangle());
        }
    window->draw(*map->get_moving()->get_player()->get_point_hero());
    window->display();
    window->clear();
}