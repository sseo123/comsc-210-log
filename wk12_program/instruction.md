Write the following two programs in C++. Upload two separate cpp and h files where applicable labeled wk12_program1.cpp and wk12_program2.cpp respectively.

\*Include meaningful comments throughout your code explaining the purpose of variables, logic, and major steps.

Program 1: Balanced Parentheses Checker (Stack Application)

Write a program that determines whether a string containing parentheses, brackets, and braces is balanced.

Examples of balanced strings:

{[()()]}

(()[])

Examples of unbalanced strings:

([)]

{([]

Requirements:

Use a stack<char> to push opening symbols.

When encountering a closing symbol, check whether the top of the stack is the correct matching opening symbol.
If the whole string is processed and the stack is empty, it is balanced.
Output example

Enter an expression: {[()]}
Balanced!

Program 2: Palindrome Checker With a Stack and Queue

Write a program that determines whether a word or sentence is a palindrome (reads the same forwards and backwards), ignoring spaces and punctuation.

Requirements:

Use a queue<char> to enqueue characters in the order they appear.
Use a stack<char> to push characters as they appear.
Compare the characters dequeued from the queue with the characters popped from the stack.
If all match, it is a palindrome.
Output example

Enter a string: racecar
This is a palindrome.
