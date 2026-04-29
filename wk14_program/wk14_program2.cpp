#include "wk14_pgm2BinaryTree.h"
#include <iostream>

int main() {

    int numbers[] = {50, 30, 70, 20, 40, 60, 80}; 
    Node<int>* intRoot = nullptr;

    std::cout << "Inserting integers into the tree: " << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
        intRoot = insert(intRoot, num);
    }

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "In-order traversal (ascending): " << std::endl;
    inorder(intRoot);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Pre-order traversal: " << std::endl;
    preorder(intRoot);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Post-order traversal: " << std::endl;
    postorder(intRoot);
    std::cout << std::endl;
    std::cout << std::endl;

    std::string words[] = {"pear", "apple", "orange", "banana"};
    Node<std::string>* stringRoot = nullptr;


    std::cout << "Inserting strings into the tree: " << std::endl;
    for (std::string word : words) {
        std::cout << word << " ";
        stringRoot = insert(stringRoot, word);
    }
    std::cout << std::endl;
    std::cout << std::endl;

    
    std::cout << "In-order traversal (alphabetical): " << std::endl;
    inorder(stringRoot);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Pre-order traversal: " << std::endl;
    preorder(stringRoot);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Post-order traversal: " << std::endl;
    postorder(stringRoot);
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;

}