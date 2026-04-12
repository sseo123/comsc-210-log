#include <iostream>

int main() {
    std::cout << "Custom Linked List Manager" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << std::endl;

    std::cout << "1. Append a value" << std::endl;
    std::cout << "2. Insert a value at a position" << std::endl;
    std::cout << "3. Delete a value at a position" << std::endl;
    std::cout << "4. Display the list" << std::endl;
    std::cout << "5. Exit" << std::endl;

    std::cout << "----------------------------" << std::endl;


    int userInput;
    int appendValue;
    int deleteValue;
    int insertValue;
    int insertPosition;

    do {
        std::cout << "Enter your choice: ";
        std::cin >> userInput;

        switch (userInput) {
            case 1:
                std::cout << "Enter value to append: ";
                std::cin >> appendValue;

                appendNode(appendValue);
                std::cout << "Value appended." << std::endl;

            case 2:
                std::cout << "Enter value to insert: ";
                std::cin >> insertValue;
                std::cout << "Enter position to insert: ";
                std::cin >> insertPosition;

                insertNode(insertValue, insertPosition);
                std::cout << "Value inserted.";

            case 3:
                std::cout << "Enter position to delete";
                std::cin >> deleteValue;

                deleteNode(deleteValue);
                std::cout << "Node deleted" << std::endl;
            case 4:
                std::cout << "Current list: ";
                displayList();

            case 5: 
                break;

            default:
                std::cout << "something went wrong, try again" << std::endl;
        }
        
    } while (userInput != 5);

}