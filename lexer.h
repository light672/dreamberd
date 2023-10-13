
#ifndef DREAMBERD_LEXER_H
#define DREAMBERD_LEXER_H

#include <string>
#include <vector>


class Lexer {
private:
    std::string source;
    int start = 0;
    int current = 0;
    int line = 1;
public:
    Lexer(std::string source);
    ~Lexer();


};



#endif //DREAMBERD_LEXER_H
