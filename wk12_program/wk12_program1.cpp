#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>


std::string isValid(std::string a) {

    std::stack<char> s;

    std::unordered_map<char, char> map = {
        {'}','{'}, 
        {']','['}, 
        {')','('}
    };


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