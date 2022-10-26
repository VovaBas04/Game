//
// Created by vova on 09.09.22.
//

#ifndef UNTITLED_MOVE_H
#define UNTITLED_MOVE_H
#include "Player.h"
#include "iostream"
#include "string"
#include "vector"
#include <unistd.h>
class Move {
public:
    Move(Player *H, float x, float y,float s);
    bool change_position(int width_map,int height_map,int direction);
    float get_x();
    float get_y();
    Player *get_player();
    void set_dont_move(std::vector<bool> is);
private:
    Player *hero;
    enum {LEFT,RIGHT,DOWN,UP,STOP};
    float coor_x;
    float coor_y;
    std::vector<bool> dont_move;
    float side;
    void move_up(int height_map);
    void move_down(int height_map);
    void move_left(int width_map);
    void move_right(int width_map);
};


#endif //UNTITLED_MOVE_H
