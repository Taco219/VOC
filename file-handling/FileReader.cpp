//
// Created by thijs on 3-11-2022.
//

#include <string>
#include <fstream>
#include "FileReader.h"


std::list<std::string> FileReader::ReadFile(std::string &fileName) {
    std::ifstream MyReadFile(fileName);

    std::list<std::string> lines;
    std::string line;

    while (std::getline (MyReadFile, line)) {
        lines.emplace_back(line);
    }

    MyReadFile.close();

    return lines;
}
