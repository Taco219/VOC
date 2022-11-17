#include "Token.h"

#include <utility>

Token::Token(TokenTypes tokenType, std::string tokenString) {
    this->tokenType = tokenType;
    this->tokenString = std::move(tokenString);
}

TokenTypes Token::GetTokenType() {
    return this->tokenType;
}

std::string Token::GetTokenString() {
    return this->tokenString;
}

