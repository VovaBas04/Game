//
// Created by vova on 05.10.22.
//

#ifndef UNTITLED_GAME_OVER_H
#define UNTITLED_GAME_OVER_H
#include "Event_playing.h"
#include "../Logs/Level_Info.h"
class Game_over: public Event_playing{
protected:
    Player *hero;
    sf::Window *window;
    Observer_Levels *level_info;
public:
};


#endif //UNTITLED_GAME_OVER_H
