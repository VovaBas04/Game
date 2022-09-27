#include <SFML/Graphics.hpp>
#include "Playing_map.h"
#include "Move.h"
#include "Player.h"
#include "Playing_map_view.h"
#include "Command_reader.h"
int main()
{
    Command_reader input=Command_reader();
    input.create_texture("img/dragon.png");
    Player Hero=Player(200, 10, 5, input.get_sprite());
    Move move=Move(&Hero, 0, 0,100);
    Playing_map Map=Playing_map(&move);
    try {
        input.set_count();
        Map = Playing_map(input.get_width(), input.get_height(), &move);
    }
    catch (std::exception &e) {
        Map = Playing_map(&move);
    }
    const int width_window=Map.get_width()*Map.get_side_field()+2,height_window=Map.get_height()*Map.get_side_field()+2;
    sf::RenderWindow window(sf::VideoMode(width_window, height_window), "SFML works!");
    window.setKeyRepeatEnabled(false);
    Playing_map_view map_show=Playing_map_view(&Map);
    while (window.isOpen())
    {   sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            move.change_position(width_window,height_window,input.keyboard_move());
        }
        map_show.show_map(&window);
    }

    return 0;
}
