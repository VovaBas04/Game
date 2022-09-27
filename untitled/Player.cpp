//
// Created by vova on 08.09.22.
//

#include "Player.h"
Player::Player(int h, int s, int p, sf::Sprite *point): health(h), speed(s), power(p), point_hero(point){
}

int Player::get_health() {
    return health;
}
int Player::get_power() {
    return power;
}
int Player::get_speed() {
    return speed;
}
sf::Sprite *Player::get_point_hero(){
    return point_hero;
};