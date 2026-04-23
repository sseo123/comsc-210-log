#include <iostream>


// recursive function. until n < 1, call sign
void sign(int n) {
    //handles any negative numbers and 0
    if (n > 0) {
        std::cout << "No Parking\n";
        sign(n - 1);
    } 
}

int main() {
    int input;

    std::cout << "Enter a number: ";
    std::cin >> input;
    std::cout << std::endl;

    // call the recursive function with the input
    sign(input);

    return 0;
}