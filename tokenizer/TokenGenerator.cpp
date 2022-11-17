#include "TokenGenerator.h"
#include "getallen/Getal.h"

#include <sstream>
#include <iterator>

template <typename Out>

// private functions
void split(const std::string &s, char delim, Out result) {
    std::istringstream iss(s);
    std::string item;
    while (std::getline(iss, item, delim)) {
        *result++ = item;
    }
}

std::list<std::string> split(const std::string &s, char delim) {
    std::list<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}

// public
TokenGenerator::TokenGenerator(GetallenChecker getallenChecker) {
    this->getallenChecker = getallenChecker;
}


std::list<Token*> TokenGenerator::GenerateTokens(std::list<std::string> &lines) {
    std::list<Token*> tokens;

    for(const std::string &line: lines){
        std::list<std::string> tokenStrings = split(line, ' ');
        Token* previousToken  = nullptr ;

        for(const std::string &tokenString: tokenStrings) {
            // TODO clean up what is probably going to be a fucking mess
            if (previousToken == nullptr || previousToken->GetTokenType() == TokenTypes::bewerker){
                // expect getal
                if(this->getallenChecker.IsValidGetal(tokenString)) {
                    Token *token = new Getal(TokenTypes::getal, tokenString, getallenChecker.ConvertGetalToInt(tokenString));
                    previousToken = token;
                    tokens.push_back(token);
                }
                else {
                    throw "ERROR geen getal";
                }
            }
            else if(previousToken->GetTokenType() == TokenTypes::getal) {
                // expect bewerker
                // todo maak bewerker checker
                if(tokenString == "plus") {
                    Token *token = new Token(TokenTypes::bewerker, tokenString);
                    previousToken = token;
                    tokens.push_back(token);
                }
                else {
                    throw "ERROR geen bewerker";
                }
            }
        }
    }

    return tokens;
}

