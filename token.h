
#ifndef DREAMBERD_TOKEN_H
#define DREAMBERD_TOKEN_H






enum TokenType {
    LEFT_PAREN,
    RIGHT_PAREN,
    LEFT_BRACE,
    RIGHT_BRACE,
    LEFT_BRACKET,
    RIGHT_BRACKET,
    COMMA,
    DOT,
    PLUS,
    MINUS,
    STAR,
    SLASH,
    PERCENT,
    CARET,
    COLON,
    SEMICOLON,
    BANG,
    AMPERSAND,
    PIPE,
    EQUAL,
    GREATER,
    GREATER_EQUAL,
    LESS,
    LESS_EQUAL,
    IDENTIFIER,
    SINGLE_QUOTE,
    DOUBLE_QUOTE,
    IF,
    TRUE,
    FALSE,
    RETURN,
    NULL,
    WHITESPACE,
    EOF,
    ERROR,
    NA,
};

#include <string>
struct Token {
public:
    const TokenType type;
    const std::string lexeme;
    const int line;
    const int count; // Increases based on how many of a character there is. For example, ==, ===, ====, and stuff
};


#endif //DREAMBERD_TOKEN_H
