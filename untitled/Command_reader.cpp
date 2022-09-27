//
// Created by vova on 19.09.22.
//
#define Max_width 1920/100
#define Max_height 1080/100
#include "Command_reader.h"
Command_reader::Command_reader() {
}
void Command_reader::create_texture(std::string png) {
    sf::Texture *texture=new sf::Texture();
    texture->loadFromFile(png);
    point_hero.setTexture(*texture);
    int height=texture->getSize().y,width=texture->getSize().x;
    dict_for_texture={{"UP",{0, height/4*3, width/3, height/4}},
                      {"DOWN",{0, 0, width/3, height/4}},
                      {"LEFT",{0,height/4, width/3, height/4}},
                      {"RIGHT",{0, height/2, width/3, height/4}}};
    point_hero.setTextureRect(sf::IntRect(0,0,width/4,height/4));
}
void Command_reader::set_count() {
    std::cout<<"Введите через пробел размеры \n";
    std::string s;
    std::getline(std::cin,s);
    int d=s.find(' ');
    std::string s1=s.substr(0,d);
    std::string s2=s.substr(d);
    count_width=std::stoi(s1);
    count_height=std::stoi(s2);
    if (count_width<1 || count_width>Max_width || count_height<1 || count_height>Max_height)
        throw std::exception();
}
int Command_reader::keyboard_move() {
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left))) { point_hero.setTextureRect(sf::IntRect (dict_for_texture["LEFT"][LEFT_UP_X],
                                                                                                    dict_for_texture["LEFT"][LEFT_UP_Y],
                                                                                                    dict_for_texture["LEFT"][RIGHT_DOWN_X],
                                                                                                    dict_for_texture["LEFT"][RIGHT_DOWN_Y]));
        return LEFT;}
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right))) {     point_hero.setTextureRect(sf::IntRect (dict_for_texture["RIGHT"][LEFT_UP_X],
                                                                                                         dict_for_texture["RIGHT"][LEFT_UP_Y],
                                                                                                         dict_for_texture["RIGHT"][RIGHT_DOWN_X],
                                                                                                         dict_for_texture["RIGHT"][RIGHT_DOWN_Y]));
        return RIGHT;}
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up))) {     point_hero.setTextureRect(sf::IntRect(dict_for_texture["UP"][LEFT_UP_X],
                                                                                                     dict_for_texture["UP"][LEFT_UP_Y],
                                                                                                     dict_for_texture["UP"][RIGHT_DOWN_X],
                                                                                                     dict_for_texture["UP"][RIGHT_DOWN_Y]));
        return UP;}
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down))) {     point_hero.setTextureRect(sf::IntRect (dict_for_texture["DOWN"][LEFT_UP_X],
                                                                                                        dict_for_texture["DOWN"][LEFT_UP_Y],
                                                                                                        dict_for_texture["DOWN"][RIGHT_DOWN_X],
                                                                                                        dict_for_texture["DOWN"][RIGHT_DOWN_Y]));
        return DOWN;}
    return STOP;
}
int Command_reader::get_width(){
    return count_width;
};
int Command_reader::get_height(){
    return count_height;
}
sf::Sprite *Command_reader::get_sprite(){
    return &point_hero;
}