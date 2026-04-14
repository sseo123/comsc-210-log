#include <iostream>
#include <string>
#include <queue>
#include <stack>


std::string checkPalindrome(std::string word) {

    std::queue<char> q;
    std::stack<char> s;

    for (char l : word) {
        // this check wouldn't be needed if the user just typed "racecar", but if they typed "RaCe car" it will be needed
        // also deals with spaces
        if (std::isalpha(l)) {
            char newLetter = std::tolower(l);
            q.push(newLetter);
            s.push(newLetter);
        }
        
    }

    //keep checking as long as there are char in the queue
    while (!q.empty()) {
        // then once they're both complete, the popped char from stack == dequeue from queue
        if (q.front() == s.top()) {
            q.pop();
            s.pop();
        } else {
            return "This is not a palindrome.";
        }
    }

    return "This is a palindrome.";


}

int main() {

    std::string userInput;

    std::cout << "Enter a string: ";
    getline(std::cin, userInput);
    std::cout << checkPalindrome(userInput) << std::endl;

    return 0;
}
