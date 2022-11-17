#pragma once

#include <list>

class FileReader {
public:
    std::list<std::string> ReadFile(std::string &fileName);
};