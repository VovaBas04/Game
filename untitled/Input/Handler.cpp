//
// Created by vova on 04.11.22.
//

#include "Handler.h"
Handler::Handler(Handler *n, std::string s,std::map<std::string,sf::Keyboard::Key> m):next(n),line(s),map(m) {
}