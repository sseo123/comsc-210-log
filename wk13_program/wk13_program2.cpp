#include <iostream>
#include <string>

int sumOfArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    // for every single recusrive call, we are adding the last element of the array until we reach n = 0
    return arr[n - 1] + sumOfArray(arr, n - 1);
}

int main() {
    //declared two variables because variables are fixed, and you can't transform the inital type
    std::string input; 
    int numOfElements;

    std::cout << "Enter number of elements: ";
    getline(std::cin, input);

    // check if this is actually a valid number or not
    for (char c : input) {
        if (!(isdigit(c))) {
            std::cout << "invalid, not a number" << std::endl;
            return 0;
        }
    }

    numOfElements = std::stoi(input);

    //edge case where array size is 0
    if (numOfElements == 0) {
        std::cout << "Sum of Array Elements: 0" << std::endl;
        return 0;
    }

    // loop through the array size and add an element per array slot
    int arr[numOfElements];
    std::cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++) {
        std::cin >> arr[i];
    }

    std::cout << std::endl;

    // call recursive function with parameters
    int result = sumOfArray(arr, numOfElements);

    std::cout << "Sum of array elements: " << result << std::endl;

    return 0;
    
}