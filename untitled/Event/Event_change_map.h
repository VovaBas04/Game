//
// Created by vova on 28.09.22.
//

#ifndef UNTITLED_EVENT_CHANGE_MAP_H
#define UNTITLED_EVENT_CHANGE_MAP_H
#include "Event_playing.h"
#include "../Field/Playing_cell.h"
#include "../Logs/Level_Game.h"
class Event_change_map:public Event_playing {
public:
    int get_save_code() override;
protected:
    std::vector<Playing_cell *> near_field;
    Observable *level;
    int save_code;
};


#endif //UNTITLED_EVENT_CHANGE_MAP_H
