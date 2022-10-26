//
// Created by vova on 20.10.22.
//

#ifndef UNTITLED_LEVEL_H
#define UNTITLED_LEVEL_H
#include "iostream"
#include "Observer_Levels.h"
#include "Message.h"
enum {Game,Warning,Info,No_Level};
enum Command{Start,Win,Lose,Update_health,Remove_power,Remove_health,Create,Destroy,Constructor,No_move};
class Level: public Observer_Levels{
public:
    int get_command();
    Message *update() override;
    void set_command(int val);
    std::string get_level();
    void set_print(bool is);
    virtual Message * create_Message()=0;
protected:
    int key;
    std::string level;
    bool is_update;
    bool is_print;
};


#endif //UNTITLED_LEVEL_H
