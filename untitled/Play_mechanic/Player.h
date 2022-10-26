//
// Created by vova on 08.09.22.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include <SFML/Graphics.hpp>

class Player {
public:
    Player(int h, int p, sf::Sprite *point);
    int get_health();
    bool get_egg();
    int get_power();
    void set_health(int h);
    void set_egg(bool s);
    void set_power(int p);
    sf::Sprite *get_point_hero();
private:
    int health;
    bool have_egg;
    int power;
    sf::Sprite *point_hero;
};


#endif //UNTITLED_PLAYER_H
