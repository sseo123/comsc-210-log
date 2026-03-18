Write the following two programs in C++. Upload your separate cpp and h files where applicable labeled wk8_program1.cpp, Date.cpp, Date.h, and wk8_program2.cpp respectively.

*Include meaningful comments throughout your code explaining the purpose of variables, logic, and major steps.

Program 1:   Date Exceptions

Modify the Date class in the file (Date.cpp Download Date.cpp Download Date.cpp).

The class should implement the following exception classes:

InvalidDay        Throw when an invalid day (<1 or > 31) is passed to the class.

InvalidMonth   Throw when an invalid month (<1 or >12) is passed to the class.

Demonstrate the class in a driver program. See example run below.

Example run of driver program

Date Exception Demonstration

Enter a month (1-12): 13
Enter a day (1-31): 12
Enter a year: 2026

Error: Invalid month entered.

Please try again.

Enter a month (1-12): 5
Enter a day (1-31): 0
Enter a year: 2026

Error: Invalid day entered.

Please try again.

Enter a month (1-12): 5
Enter a day (1-31): 18
Enter a year: 2026

Date entered successfully.
Current date: 5/18/2026

Program 2:  Minimum/Maximum Templates

Write function templates for the two functions minimum and maximum. The minimum function should accept two arguments and return the value of the argument that is the lesser of the two. The maximum function should accept two arguments and return the value of the argument that is the greater of the two. Design and demonstrate a simple driver program that demonstrates the function templates with various data types.

Example run of driver program

Function Template Demonstration

Integer Values
--------------
Enter two integers: 12 8

Minimum value: 8
Maximum value: 12


Double Values
-------------
Enter two decimal numbers: 4.75 9.32

Minimum value: 4.75
Maximum value: 9.32


Character Values
----------------
Enter two characters: A D

Minimum value: A
Maximum value: D