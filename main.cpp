#include <iostream>

#include <string>
#include "automata.h"
#include "scanner.h"
int main(){
    Automata email_tester;
    std::string mail = "asd@gmail.com";
    std::vector<Token> input;
    Scanner scanner;
    for (char c : mail)  
        input.push_back(scanner.scan(c));
    email_tester.run(input);
    std::cout << email_tester.accepted() ? "Email is valid" : "Email is not valid";
};