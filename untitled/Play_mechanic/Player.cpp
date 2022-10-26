//
// Created by vova on 08.09.22.
//

#include "Player.h"
Player::Player(int h, int p, sf::Sprite *point): health(h), have_egg(false), power(p), point_hero(point){
}

int Player::get_health() {
    return health;
}
int Player::get_power() {
    return power;
}
bool Player::get_egg() {
    return have_egg;
}
sf::Sprite *Player::get_point_hero(){
    return point_hero;
};
void Player::set_health(int h) {
    health=h;
}
void Player::set_power(int p) {
    power=p;
}
void Player::set_egg(bool s) {
    have_egg=s;
}