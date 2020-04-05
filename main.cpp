#include "automata.h"
#include "scanner.h"
int main(int argc, char *argv[]){
    if (argc == 1){
        std::cout<<"Please enter automata file";
        return 0;
    };
    Automata email_tester(argv[1]);
    std::string mail = "asd@gmail.com";
    std::vector<Token> TokenVec;
    email_tester.show();
    Scanner scanner;
    for (char c : mail)  
        TokenVec.push_back(scanner.scan(c));
    for (Token t : TokenVec)
        std::cout << t.type() << " ";
    /* email_tester.run(TokenVec);
    // std::cout << email_tester.accepted() ? "Email is valid" : "Email is not valid";
    */
    return 0;
};