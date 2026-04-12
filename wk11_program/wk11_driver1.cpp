#include "wk11_LinkedList1.h"
#include <iostream>

int main() {

    LinkedList list;

    std::cout << "Custom Linked List Manager" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << std::endl;

    int userInput;
    int appendValue;
    int deletePos;
    int insertValue;
    int insertPosition;

    do {
        std::cout << "1. Append a value" << std::endl;
        std::cout << "2. Insert a value at a position" << std::endl;
        std::cout << "3. Delete a value at a position" << std::endl;
        std::cout << "4. Display the list" << std::endl;
        std::cout << "5. Exit" << std::endl;

        std::cout << "----------------------------" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> userInput;

        switch (userInput) {
            case 1:
                std::cout << "Enter value to append: ";
                std::cin >> appendValue;

                list.append(appendValue);
                std::cout << "Value appended." << std::endl;
                break;

            case 2:
                std::cout << "Enter value to insert: ";
                std::cin >> insertValue;
                std::cout << "Enter position to insert: ";
                std::cin >> insertPosition;

                list.insert(insertValue, insertPosition);
                std::cout << "Value inserted.";
                break;

            case 3:
                std::cout << "Enter position to delete";
                std::cin >> deletePos;

                list.deleteAt(deletePos);
                std::cout << "Node deleted" << std::endl;
                break;

            case 4:
                std::cout << "Current list: ";
                list.display();
                break;

            case 5: 
                break;

            default:
                std::cout << "something went wrong, try again" << std::endl;
        }
        
    } while (userInput != 5);


    return -;
}