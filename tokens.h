#ifndef TOKENS_H
#define TOKENS_H

enum tokens{W, A, P, O};
class Token{
    private:
    tokens name;
    public:
    Token(tokens _name) : name(_name){};
    tokens type(){return name;};
};

#endif