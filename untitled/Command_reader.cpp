//
// Created by vova on 19.09.22.
//
#define Max_width 1920/100
#define Max_height 1080/100
#include "Command_reader.h"
Command_reader::Command_reader(Save_keyboard *h):hold(h) {
    Map_Sfml *m=new Map_Sfml;
    bindChar=m->bindChar;
    is_pressed= false;
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
//Доработать
int Command_reader::keyboard_move(sf::Event *e) {
    std::map<std::string,std::string> keyboard=hold->get_keyboard();
    if (e->type==sf::Event::KeyReleased)
        is_pressed= false;
    if (is_pressed)
        return STOP;
    if (e->type==sf::Event::KeyPressed &&(sf::Keyboard::isKeyPressed(bindChar[keyboard["Left"]]))) { point_hero.setTextureRect(sf::IntRect (dict_for_texture["LEFT"][LEFT_UP_X],
                                                                                                    dict_for_texture["LEFT"][LEFT_UP_Y],
                                                                                                    dict_for_texture["LEFT"][RIGHT_DOWN_X],
                                                                                                    dict_for_texture["LEFT"][RIGHT_DOWN_Y]));
        is_pressed= true;
        return LEFT;}
    if (e->type==sf::Event::KeyPressed &&(sf::Keyboard::isKeyPressed(bindChar[keyboard["Right"]]))) {     point_hero.setTextureRect(sf::IntRect (dict_for_texture["RIGHT"][LEFT_UP_X],
                                                                                                         dict_for_texture["RIGHT"][LEFT_UP_Y],
                                                                                                         dict_for_texture["RIGHT"][RIGHT_DOWN_X],
                                                                                                         dict_for_texture["RIGHT"][RIGHT_DOWN_Y]));
        is_pressed= true;
        return RIGHT;}
    if (e->type==sf::Event::KeyPressed &&(sf::Keyboard::isKeyPressed(bindChar[keyboard["Up"]]))) {     point_hero.setTextureRect(sf::IntRect(dict_for_texture["UP"][LEFT_UP_X],
                                                                                                     dict_for_texture["UP"][LEFT_UP_Y],
                                                                                                     dict_for_texture["UP"][RIGHT_DOWN_X],
                                                                                                     dict_for_texture["UP"][RIGHT_DOWN_Y]));
        is_pressed= true;
        return UP;}
    if (e->type==sf::Event::KeyPressed &&(sf::Keyboard::isKeyPressed(bindChar[keyboard["Down"]]))) {     point_hero.setTextureRect(sf::IntRect (dict_for_texture["DOWN"][LEFT_UP_X],
                                                                                                        dict_for_texture["DOWN"][LEFT_UP_Y],
                                                                                                        dict_for_texture["DOWN"][RIGHT_DOWN_X],
                                                                                                        dict_for_texture["DOWN"][RIGHT_DOWN_Y]));
        is_pressed= true;
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

bool Command_reader::is_end() {
    std::map<std::string,std::string> keyboard=hold->get_keyboard();
    if (sf::Keyboard::isKeyPressed(bindChar[keyboard["Exit"]]))
        return true;
    else
        return false;
}
void Command_reader::set_levels(std::vector<Observer_Levels *> *levels){
    std::cout<<"Введите через запятую уровни логирования через запятую, например:[INF],[GM],[WRN].В случае не распознанной команды логирования не будет."<<'\n';
    std::string s;
    std::getline(std::cin,s);
    int d=s.find(',');
    if (d!=-1){
        std::string s1=s.substr(0,d);
        set_level(s1,levels);
        std::string s2=s.substr(d+1);
        int f=s2.find(',');
        if (f!=-1){
            std::string s3=s2.substr(f+1);
            set_level(s3,levels);
            s2=s2.substr(0,f);
            set_level(s2,levels);
        }
        else
            {
                set_level(s2,levels);
            }
    }
    else{
        set_level(s,levels);

    }
    for (int i=0;i<levels->size();i++)
        if ((*levels)[i]->get_level()=="[INF]"){
            std::swap((*levels)[levels->size()-1],(*levels)[i]);}
}
void Command_reader::set_level(std::string s,std::vector<Observer_Levels *> *levels) {
    if (s=="[INF]")
        levels->push_back(new Level_Info());
    else
        if (s=="[GM]")
            levels->push_back(new Level_Game());
        else
            if (s=="[WRN]")
                levels->push_back(new Level_Warning());
}
void Command_reader::set_loggers(std::vector<Logger *> &l) {
    std::cout<<"Введите без пробелов символ C-если хотите выводить логи через консоль, иначе символ F если файл.Например:CF\n";
    std::string s;
    std::getline(std::cin,s);
    if (s=="CF" || s=="FC"){
        l.push_back(new Logger_Console(nullptr));
        l.push_back(new Logger_File(nullptr));
    }
    else
        if (s=="F")
            l.push_back(new Logger_File(nullptr));
        else
            if (s=="C")
                l.push_back(new Logger_Console(nullptr));

}
int Command_reader::get_level_for_play() {
    std::cout<<"Введите уровень, на котором вы хотите играть\n";
    int level;
    try{
        std::cin>>level;
        if (level>2 || level<1)
            level=1;
    }
    catch (std::exception &e){
        level=1;
    }
    return level;
}