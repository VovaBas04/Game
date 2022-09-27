//
// Created by vova on 08.09.22.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include <SFML/Graphics.hpp>

class Player {
public:
    Player(int h, int s, int p, sf::Sprite *point);
    int get_health();
    int get_speed();
    int get_power();
    sf::Sprite *get_point_hero();
private:
    int health;
    int speed;
    int power;
    sf::Sprite *point_hero;
};


#endif //UNTITLED_PLAYER_H
