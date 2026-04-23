#include <iostream>

void sign(int n) {
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

    sign(input);

    return 0;
}