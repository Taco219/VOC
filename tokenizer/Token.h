#pragma once

#include <string>
#include "TokenTypes.h"

class Token {
private:
    TokenTypes tokenType;
    std::string tokenString;
public:
    Token(TokenTypes tokenType, std::string tokenString);

    TokenTypes GetTokenType();
    std::string GetTokenString();
};


