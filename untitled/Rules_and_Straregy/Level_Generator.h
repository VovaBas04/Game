//
// Created by vova on 21.11.22.
//

#ifndef UNTITLED_LEVEL_GENERATOR_H
#define UNTITLED_LEVEL_GENERATOR_H
#include "../Field/Playing_map.h"
template <typename ... Rules>
class Level_Generator{
public:
    Playing_map *generate_map(int width,int height,Move *m,Observable *ob);

    template <typename RuleType>
    void applyer(Playing_map *field);
};

template <typename ... Rules>
Playing_map *Level_Generator<Rules ...>::generate_map(int width,int height,Move *m,Observable *ob) {
    Playing_map *field= new Playing_map(width,height,m,ob);
    (applyer<Rules>(field), ...);
    return field;
}
template <typename... Rules>
template <typename RuleType>
void Level_Generator<Rules...>::applyer(Playing_map *field)
{
    RuleType obj;
    obj.do_rule(field);
}
#endif //UNTITLED_LEVEL_GENERATOR_H