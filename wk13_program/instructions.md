Write the following two programs in C++. Upload two separate cpp where applicable labeled wk13_program1.cpp and wk13_program2.cpp respectively.

*Include meaningful comments throughout your code explaining the purpose of variables, logic, and major steps.

Program 1:   Recursive Conversion

Convert the following function to one that uses recursion.

void sign(int n)

{

    while (n > 0)

    {

        cout << "No Parking\n";

        n--;

    }

} 
Demonstrate the function with a driver program.

Example Run 1

Enter a number: 3

No Parking
No Parking
No Parking

Example Run 2

Enter a number: 5

No Parking
No Parking
No Parking
No Parking
No Parking

Example Run 3 (Edge Case: n = 0)

Enter a number: 0

*No output because the base case is immediately met.

Example Run 4 (Negative Input)

Enter a number: -2

*No output since n <= 0 triggers the base case.

Program 2:   Recursive Array Sum

Write a function that accepts an array of integers and a number indicating the number of elements as arguments. The function should recursively calculate the sum of all the numbers in the array.

Demonstrate the function in a driver program.

 

Example Run 1 (Small Array)

Enter number of elements: 3
Enter elements: 2 4 6

Sum of array elements: 12

 

Example Run 2 (Larger Array)

Enter number of elements: 5
Enter elements: 1 3 5 7 9

Sum of array elements: 25

 

Example Run 3 (Including Negative Numbers)

Enter number of elements: 4
Enter elements: 10 -2 3 -1

Sum of array elements: 10

 

Example Run 4 (Edge Case: Empty Array)

Enter number of elements: 0

Sum of array elements: 0

