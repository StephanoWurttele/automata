#ifndef STATE_H
#define STATE_H

#include <string>

class State{
    private:
        std::string name;
        bool acceptance;
    public:
        State(std::string _name, bool _end):name(_name), acceptance(_end){};
        bool final(){return acceptance;};
    
};

#endif