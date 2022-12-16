//
// Created by vova on 21.11.22.
//

#include "First_Level.h"

Playing_map *First_Level::create_level(int width,int height,Move *m,Observable *ob) {
    return levelGenerator.generate_map(width,height,m,ob);
}