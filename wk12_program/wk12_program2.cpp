#include <iostream>
#include <string>
#include <queue>
#include <stack>


std::string checkPalindrome(std::string word) {

    std::queue<char> q;
    std::stack<char> s;

    for (char l : word) {
        if (std::isalpha(l)) {
            char newLetter = std::tolower(l);
            q.push(newLetter);
            s.push(newLetter);
        }
        
    }

    while (!q.empty()) {
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

// use a queue<char> to enqueue char in the order they appear
// use a stack<char> to push char as they appear

// idea, for every char in string:
// push to stack, and enqueue to queue
// then once they're both complete, the popped char from stack == dequeue from queue
// if stack.empty() and queue.empty() and nothing broke, return worked