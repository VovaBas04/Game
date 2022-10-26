#include <SFML/Graphics.hpp>
#include "Field/Playing_map.h"
#include "Play_mechanic/Move.h"
#include "Play_mechanic/Player.h"
#include "View/Playing_map_view.h"
#include "Command_reader.h"
#include "Logs/Observe_object.h"
#include <iostream>
#include <fstream>
int main()
{   std::ofstream out;
    out.open("img/log.txt");
    sf::Image i=sf::Image();
    srand(time(NULL));
    Command_reader input=Command_reader();
    input.create_texture("img/dragon.png");
    Player Hero=Player(3, 1, input.get_sprite());
    Move move=Move(&Hero, 0, 0,100);
    std::vector<Observer_Levels *> l;
    std::vector<Logger *> log;
    l.push_back(new Level_Game());
    l.push_back(new Level_Warning());
    l.push_back(new Level_Info());
    input.set_levels(l);
    input.set_loggers(log);
    Observable *o= new Observe_object(l,log);
    Playing_map Map=Playing_map(&move,l);
    l[Info]->set_command(Start);
    try {
        input.set_count();
        Map = Playing_map(input.get_width(), input.get_height(), &move,l);
    }
    catch (std::exception &e) {
        Map = Playing_map(&move,l);
        l[Warning]->set_command(Constructor);
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
                l[Warning]->set_command(No_move);
//            std::cout<<Hero.get_health()<<'\n';
            o->notify();
        }
        map_show.show_map(&window);
    }
    o->notify();
    return 0;
}
