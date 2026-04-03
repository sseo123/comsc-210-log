#include "wk10_program1.h"
#include <fstream>
#include <sstream>
#include <cctype>
#include <iostream>
#include <string>
#include <set>

std::string parseFileIntoString() {
    std::ifstream file;
    file.open("sample.txt");

    if (file.fail()) {
        return "File failed to open";
    }
    
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string file_contents;
    file_contents = buffer.str();
    file.close();

    return file_contents;
}

std::set<std::string> createSet() {
    std::string longString = parseFileIntoString();

    for (char &c : longString) {
         c = std::tolower((unsigned char)c);
    } 

    std::set<std::string> mySet;

    for (int i = 0; i < longString.length(); i++) {
        std::string word = "";
        while (i < longString.length() && std::isalpha(longString[i])) {
            word += longString[i];
            i++;
        }

        if (!(word == "")) {
            mySet.insert(word);
        }
    }

    return mySet;
}

int main() {
    std::set<std::string> mySet = createSet();
    for (std::string uniqueWord : mySet) {
        std::cout << uniqueWord << std::endl;
    }
}