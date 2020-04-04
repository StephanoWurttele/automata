#ifndef STATE_H
#define STATE_H


class State{
    private:
        int name;
        bool acceptance;
    public:
        State(int _name);
        bool final(){return acceptance;};
    
};

#endif