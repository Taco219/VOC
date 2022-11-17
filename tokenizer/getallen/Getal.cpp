#include <utility>

#include "Getal.h"

int Getal::GetValue() {
    return this->value;
}

Getal::Getal(TokenTypes tokenType, std::string tokenString, int value) : Token(tokenType, std::move(tokenString)) {
    this->value = value;
}
