#pragma once

#include "../Token.h"

class Getal : public Token {
private:
    int value;
public:
    Getal(TokenTypes tokenType, std::string tokenString, int value);

    int GetValue();
};


