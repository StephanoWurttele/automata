#ifndef TRANSITIONS_H
#define TRANSITIONS_H

#include "tokens.h"
#include "state.h"

class Transition{
    private:
    Token token;
    State target;
    public:
    Transition();
    tokens path(){return token.type;}
};

#endif