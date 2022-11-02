#include <SFML/Graphics.hpp>
#include "Field/Playing_map.h"
#include "Play_mechanic/Move.h"
#include "Play_mechanic/Player.h"
#include "View/Playing_map_view.h"
#include "Command_reader.h"
#include "Logs/Observe_object.h"
#include "Logs/Command_constructor.h"
#include "Logs/Command_start.h"
#include "Logs/Command_dont_move.h"
#include <iostream>
#include "fstream"
int main()
{
    sf::Image i=sf::Image();
    srand(time(NULL));
    Command_reader input=Command_reader();
    input.create_texture("img/dragon.png");
    Player Hero=Player(3, 1, input.get_sprite());
    Move move=Move(&Hero, 0, 0,100);
    std::vector<Observer_Levels *> l;
    std::vector<Logger *> log;
    input.set_levels(&l);
    input.set_loggers(log);
    Observable *o= new Observe_object(l,log);
    Playing_map Map=Playing_map(&move,o);
    o->set_command_of_prefix("[INF]",new Command_start);
    try {
        input.set_count();
        Map = Playing_map(input.get_width(), input.get_height(), &move,o);
    }
    catch (std::exception &e) {
        Map = Playing_map(&move,o);
        o->set_command_of_prefix("[WRN]",new Command_constructor);
    }
    const int width_window=Map.get_width()*Map.get_side_field()+2,height_window=Map.get_height()*Map.get_side_field()+2;
    sf::RenderWindow window(sf::VideoMode(width_window, height_window), "SFML works!");
    window.setKeyRepeatEnabled(false);
    Map.set_window(&window);
    Playing_map_view map_show=Playing_map_view(&Map);
    while (window.isOpen())
    {   sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (move.change_position(width_window,height_window,input.keyboard_move()))
                o->set_command_of_prefix("[WRN]",new Command_dont_move);
//            std::cout<<Hero.get_health()<<'\n';
            o->notify();
        }
        map_show.show_map(&window);
    }
    o->notify();
    for (int i=0;i<log.size();i++)
        delete log[i];
    return 0;
}
