#include "wk11_LinkedList2.h"
#include <iostream>
using namespace std;


int main() {
    LinkedList list;
    int choice;
    int value;
    int position;
    int result;

    cout << "   CUSTOM LINKED LIST MANAGER (Program 2)" << endl;
    cout << "========================================" << endl;

    do {
        cout << "1. Append a value" << endl;
        cout << "2. Insert a value at a position" << endl;
        cout << "3. Delete a value at a position" << endl;
        cout << "4. Display the list" << endl;
        cout << "5. Reverse the list" << endl;
        cout << "6. Search for a value" << endl;
        cout << "7. Exit" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to append: ";
                cin >> value;

                list.append(value);

                cout << "Value appended." << endl;
                std::cout << std::endl;
                break;

            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert at: ";
                cin >> position;

                list.insert(value, position);

                cout << "Value inserted." << endl;
                std::cout << std::endl;
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> position;
                list.deleteAt(position);

                cout << "Node deleted." << endl;
                std::cout << std::endl;
                break;

            case 4:
                list.display();

                std::cout << std::endl;
                break;

            case 5:
                cout << "Reversing the list..." << endl;
                list.reverse();

                cout << "List reversed successfully." << endl;
                std::cout << std::endl;
                break;

            case 6:
                cout << "Enter value to search for: ";
                cin >> value;
                result = list.search(value);
                
                if (result != -1) {
                    cout << "Value found at position: " << result << endl;
                } else {
                    cout << "Value not found. Returned: " << result << endl;
                }
                std::cout << std::endl;

                break;

            case 7:
                cout << "Exiting program..." << endl;
                cout << "Destroying linked list..." << endl;
                cout << "All nodes deleted." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
        }
    } while (choice != 7);

    return 0;
}