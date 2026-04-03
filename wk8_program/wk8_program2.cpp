#include <iostream>

//template for when you want to return the minimum value
template <typename T> T minimum(T parameter1, T parameter2) {
    if (parameter1 > parameter2) {
        return parameter2;
    } else {
        return parameter1;   
    }
}

//template for when you want to return the max value
template <typename T> T maximum(T parameter1, T parameter2) {
    if (parameter1 > parameter2) {
        return parameter1;
    } else {
        return parameter2;
    }

}

void intCase() {
    int num1;
    int num2;
    std::cout << "Integer Values" << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "Enter two Integers: ";
    std::cin >> num1 >> num2;
    std::cout << std::endl;
    std::cout << "Minimum value: " << minimum(num1, num2) << std::endl;
    std::cout << "Maximum value: " << maximum(num1, num2) << std::endl;
}

void doubleCase() {
    double num1;
    double num2;
    std::cout << "Double Values" << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "Enter two decimal numbers: ";
    std::cin >> num1 >> num2;
    std::cout << std::endl;
    std::cout << "Minimum value: " << minimum(num1, num2) << std::endl;
    std::cout << "Maximum value: " << maximum(num1, num2) << std::endl;
}

void charCase() {
    char num1;
    char num2;
    std::cout << "Character Values" << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "Enter two characters: ";
    std::cin >> num1 >> num2;
    std::cout << std::endl;
    std::cout << "Minimum value: " << minimum(num1, num2) << std::endl;
    std::cout << "Maximum value: " << maximum(num1, num2) << std::endl;
}

int main() {
    std::cout << "Function Template Demonstration" << std::endl;

    //calling each of the cases like the example showed
    intCase();
    doubleCase();
    charCase();

    return 0;
}