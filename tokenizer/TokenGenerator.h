#pragma once

#include <string>
#include <list>

#include "Token.h"
#include "getallen/GetallenChecker.h"

class TokenGenerator {
private:
    GetallenChecker getallenChecker;
public:
    TokenGenerator(GetallenChecker getallenChecker);

    std::list<Token*> GenerateTokens(std::list<std::string> &lines);
};
