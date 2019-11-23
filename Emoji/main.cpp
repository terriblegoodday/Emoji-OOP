//
//  main.cpp
//  Emoji
//
//  Created by Eduard Dzhumagaliev on 10/26/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "utflib.hpp"

typedef std::bitset<48> utf8char;

void printChars(std::string forString) {
    //    Prints the characters of `forString` in their binary form
    char charArray[forString.length() + 1];
    strcpy(charArray, forString.c_str());
    for (auto c: charArray) {
        std::cout << utflib::extractChar(c) << " ";
    }
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    std::fstream file;
    file.open("emoji.txt", ios::in);
    for (std::string currentString; std::getline(file, currentString);) {
        std::cout << currentString << std::endl;
        printChars(currentString);
    }
    file.close();
    return 0;
}


