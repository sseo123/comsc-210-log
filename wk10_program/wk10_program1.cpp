#include "wk10_program1.h"
#include <fstream>
#include <sstream>
#include <cctype>
#include <iostream>
#include <string>
#include <set>

std::string parseFileIntoString(std::string fileName) {
    std::ifstream file;

    //taking the input from the user, we open this file
    file.open(fileName);

    //assuming a file might not exist, we cover this edge case
    if (file.fail()) {
        return "File failed to open";
    }
    
    //this opens the file, converts the entire file into one string, and then closes the file
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string file_contents;
    file_contents = buffer.str();
    file.close();

    //returns the singular string with all of the files contents in it
    return file_contents;
}

//returns a set since it's the datastructure that can handle all the non unique words
std::set<std::string> createSet(std::string fileName) {
    std::string longString = parseFileIntoString(fileName);

    //handled the edge case of "The" with a capital T vs "the" with a lowercse t
    //if this didn't exist, the final return would include both "The" and "the", but
    //in the example only the lowercase one is returned. 
    for (char &c : longString) {
         c = std::tolower((unsigned char)c);
    } 

    std::set<std::string> mySet;

    //iterate through each word and if the word is a letter then add it to the current
    //loops word, else iterate to the next 
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

    //loop through each uniqueWord in mySet, and then return each index
    //since this is a set, thankfully c++ does the sorting for me so it matches the example
    std::set<std::string> mySet = createSet(fileName);
    for (std::string uniqueWord : mySet) {
        std::cout << uniqueWord << std::endl;
    }
}