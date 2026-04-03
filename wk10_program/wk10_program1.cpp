#include "wk10_program1.h"
#include <fstream>
#include <sstream>
#include <cctype>
#include <iostream>
#include <string>
#include <set>

std::string parseFileIntoString(std::string fileName) {
    std::ifstream file;
    file.open(fileName);

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

std::set<std::string> createSet(std::string fileName) {
    std::string longString = parseFileIntoString(fileName);

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
    std::string fileName;
    
    std::cout << "Enter the filename: ";
    getline(std::cin, fileName);
    std::cout << std::endl;

    std::cout << "Unique words found in the file:" << std::endl;

    std::set<std::string> mySet = createSet(fileName);
    for (std::string uniqueWord : mySet) {
        std::cout << uniqueWord << std::endl;
    }
}