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
#include "Input/Reader_file.h"
#include <iostream>
#include "Rules_and_Straregy/Context.h"
#include "Rules_and_Straregy/First_Level.h"
#include "Rules_and_Straregy/Second_Level.h"
#include "Save/Save_data.h"
#include "Save/Wrong_Transaction.h"
#include "Save/Load_data.h"
#include <csignal>
int main()
{
    sf::Image i=sf::Image();
    srand(time(NULL));
    Reader *r= new Reader_file();
    Save_keyboard *s=new Save_keyboard;
    Command_reader input=Command_reader(s);
    input.create_texture("img/dragon.png");
    bool bag=false;
    try {
        input.set_count();
    }
    catch (std::exception &e) {
        bag=true;
    }

    Player Hero=Player(3, 1, input.get_sprite());
    Move move=Move(&Hero,100);
    std::vector<Observer_Levels *> l;
    std::vector<Logger *> log;
    input.set_levels(&l);
    input.set_loggers(log);
    Observable *o= new Observe_object(l,log);
    Playing_map *Map= nullptr;
    I_Level_strategy *level= nullptr;
    if (input.get_level_for_play()==1)
        level=new First_Level;
    else
        level=new Second_Level;
    Context c=Context(level);
    try {
        if (bag) {
            std::exception e;
            throw e;
        }
        Map = c.generate_level(input.get_width(), input.get_height(), &move,o);
    }
    catch (std::exception &e) {
        Map = c.generate_level(10,10,&move,o);
        o->set_command_of_prefix("[WRN]",new Command_constructor);
    }
//    Load_data *load=new Load_data(Map);
//    try{
//    load->load_characteristic("img/characteristics.txt");
//    load->load_cells("img/cells.txt");
//    load->load_position("img/position.txt");
//    }
//    catch (Wrong_Read_File e){
//        std::cout<<e.return_error();
//    }
    o->set_command_of_prefix("[INF]",new Command_start);
    const int width_window=(Map->get_width()+1)*(Map->get_side_field()),height_window=Map->get_height()*(Map->get_side_field());
    sf::RenderWindow window(sf::VideoMode(width_window, height_window), "SFML works!");
    window.setKeyRepeatEnabled(false);
    Map->set_window(&window);
    move=*Map->get_moving();
    Playing_map_view map_show=Playing_map_view(Map);
    r->read_keyboard(s);
//    Wrong_Transaction trans=Wrong_Transaction(*Map);
    while (window.isOpen())
    {   sf::Event event;
        while (window.pollEvent(event))
        {
            if (sf::IntRect(Map->get_width(),Map))
            if (event.type == sf::Event::Closed)
                window.close();
            if (move.change_position(width_window,height_window,input.keyboard_move(&event)))
                o->set_command_of_prefix("[WRN]",new Command_dont_move);
            o->notify();

            if (input.is_end())
                window.close();
        }
        map_show.show_map(&window);
    }
    o->notify();
    Save_data *saver=new Save_data(Map);
    saver->save_cells("img/cells.txt");
    saver->save_characteristics("img/characteristics.txt");
    saver->save_position("img/position.txt");
    for (int i=0;i<log.size();i++)
        delete log[i];

    return 0;
}
