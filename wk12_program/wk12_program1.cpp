#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>


std::string isValid(std::string a) {

    std::stack<char> s;

    // created a map to check for the correct pair
    std::unordered_map<char, char> map = {
        {'}','{'}, 
        {']','['}, 
        {')','('}
    };


    // for each letter in the word that the user wrote, check if it's either an opening char or a closing char
    // if it's an opening push it to the stack, but if it's a closing and the stack is empty then you know its not balanced
    for (char l : a) {
        if (l == '{' || l == '[' || l == '(') {
            s.push(l);
        } else if (l == '}' || l == ']' || l == ')') {
            if (s.empty() || s.top() != map[l]) {
                return "Not Balanced!";
            }
            s.pop();
        }
    }

    //if the stack isn't empty, this means there were 1 or more closing char missing and therefore not balanced
    if (!s.empty()) {
        return "Not Balanced!";
    }

    return "Balanced!";

}



int main() {
    
    std::string userInput;

    std::cout << "Enter an expression: ";
    getline(std::cin, userInput);

    std::cout << isValid(userInput) << std::endl;

    return 0;

}