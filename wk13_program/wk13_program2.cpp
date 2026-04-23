#include <iostream>
#include <string>

int sumOfArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sumOfArray(arr, n - 1);
}

int main() {
    int numOfElements; 

    std::cout << "Enter number of elements: ";
    std::cin >> numOfElements;

    if (numOfElements == 0) {
        std::cout << "Sum of Array Elements: 0" << std::endl;
        return 0;
    }

    int arr[numOfElements];
    std::cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++) {
        std::cin >> arr[i];
    }

    std::cout << std::endl;

    int result = sumOfArray(arr, numOfElements);

    std::cout << "Sum of array elements: " << result << std::endl;


    return 0;
    
}