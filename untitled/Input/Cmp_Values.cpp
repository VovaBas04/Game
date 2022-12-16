//
// Created by vova on 14.11.22.
//

#include "Cmp_Values.h"

bool Cmp_Values::work_something() {
  for (auto elem:map){
      if (elem.second==line){
          return false;
      }
  }
  return true;
}
Cmp_Values::Cmp_Values(Handler *n, std::string s, std::map<std::string, std::string> m): Handler(n,s),map(m) {}