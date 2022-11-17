cmake_minimum_required(VERSION 3.10)
project(VOC)

set(CMAKE_CXX_STANDARD 14)

add_executable(VOC main.cpp file-handling/FileReader.cpp file-handling/FileReader.h tokenizer/TokenGenerator.cpp tokenizer/TokenGenerator.h tokenizer/Token.cpp tokenizer/Token.h tokenizer/TokenTypes.h tokenizer/getallen/GetallenChecker.cpp tokenizer/getallen/GetallenChecker.h tokenizer/getallen/Getal.cpp tokenizer/getallen/Getal.h)