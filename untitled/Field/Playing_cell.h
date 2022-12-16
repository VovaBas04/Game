//
// Created by vova on 06.09.22.
//

#ifndef UNTITLED_PLAYING_CELL_H
#define UNTITLED_PLAYING_CELL_H
#include <SFML/Graphics.hpp>
#include "../Play_mechanic/Move.h"
#include "../Event/Event_playing.h"

class Playing_cell {
public:
    Playing_cell(bool is, float s, float x, float y);
    bool is_here(Move *move_hero);
    void set_passability(bool is);
    bool get_passability();
    float get_x();
    float get_y();
    float get_side();
    void set_event(Event_playing *e);
    void set_was();
    int get_was();
    Event_playing * get_event();
private:;
    float side;
    Event_playing *event;
    bool is_passability;
    float coor_x;
    bool is_was;
    float coor_y;
    int code_event;
};


#endif //UNTITLED_PLAYING_CELL_H
