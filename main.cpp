#include <iostream>
#include <fstream>
#include <string>
#include <list>

#include "file-handling/FileReader.h"
#include "tokenizer/TokenGenerator.h"

int main() {
    FileReader fReader = FileReader();

    GetallenChecker getallenChecker = GetallenChecker();

    TokenGenerator tokenGenerator = TokenGenerator(getallenChecker);

    std::string fileLocation = "../voc-scripts/file1.voc";
    std::list<std::string> lines = fReader.ReadFile(fileLocation);
    std::list<Token*> tokens = tokenGenerator.GenerateTokens(lines);

    int i = 1;

    for(Token* token: tokens) {
        delete token;
    }

    return 0;
}