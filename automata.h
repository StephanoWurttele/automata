#ifndef AUTOMATA_H
#define AUTOMATA_H

#include "transitions.h"
#include <vector>
class Automata{
    private:
    std::vector<State> states;
    std::vector<std::vector<Transition>> transitions;
    State* current_state;
    public:
    Automata(std::string file);
    void run(std::vector<Token> string);
    bool accepted();
};

#endif