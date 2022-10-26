//
// Created by vova on 09.09.22.
//
int i=0;
#include "Move.h"
Move::Move(Player *H, float x, float y,float s): hero(H), coor_x(x), coor_y(y),side(s){
    dont_move=std::vector<bool>(4,false);
}
bool Move::change_position(int width_map, int height_map,int direction) {
    float x_pred=coor_x,y_pred=coor_y;
    sf::Sprite *herosprite = hero->get_point_hero();
    if ( direction==LEFT && !dont_move[LEFT]) {move_left(width_map);}
    if ( direction==RIGHT && !dont_move[RIGHT]) { move_right(width_map); }
    if ( direction==UP && !dont_move[UP]) { move_up(height_map); }
    if (direction== DOWN && !dont_move[DOWN]) { move_down(height_map); }
    herosprite->setPosition(coor_x, coor_y);
    if (direction!=STOP && (x_pred==coor_x && y_pred==coor_y))
        return true;
    else
        return false;
}
void Move::move_left(int width_map) {
    if (coor_x>0)
        coor_x-=side;
    else
        coor_x=width_map-side-2;
}
void Move::move_right( int width_map) {
    if (coor_x+side+2<width_map)
        coor_x+=side;
    else
        coor_x=0;
}
void Move::move_up( int height_map) {
    if (coor_y > 0)
        coor_y -= side;
    else
        coor_y = height_map-side-2;
}
void Move::move_down(int height_map){
    if (coor_y+side+2<height_map)
        coor_y+=side;
    else
        coor_y=0;
}
Player * Move::get_player(){
    return hero;
}
float Move::get_x() {
    return coor_x;
}
float Move::get_y() {
    return coor_y;
}
void Move::set_dont_move(std::vector<bool> is){
    dont_move=is;
}