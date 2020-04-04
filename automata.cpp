#include <fstream>
#include "automata.h"

Automata::Automata(std::string filename){
    std::ifstream format(filename);
    unsigned NodeNum;
    std::string temp, ANode, targetNode;
    getline(format, temp);
    NodeNum = std::stoi(temp);
    for(int i = 0; i < NodeNum; i++ ){
        getline(format,temp);
        getline(format, ANode);
        states.emplace_back(temp, ANode == "1");
    }
    for(int i = 0; i < NodeNum; i++ ){
        std::vector<Transition> vec;
        for(int i = 0; i < (int)tokens::Count; ++i){
            getline(format, targetNode);
            vec.emplace_back(W);
        }
    }
}

void Automata::run(std::vector<Token> string){

};