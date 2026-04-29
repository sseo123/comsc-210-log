#include <iostream>
#include <queue>

template <typename T>
struct Node {
    T data;
    Node* left;
    Node* right;
};

template <typename T>
Node<T>* createNode(T data) {
    Node<T>* newNode = new Node<T>();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

template <typename T>
Node<T>* insert(Node<T>* root, T data) {
    if (root == nullptr) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

//in order traversal 
template <typename T>
void inorder(Node<T>* root, std::queue<T>& myQueue) {
    if (root != nullptr) {
        inorder(root->left, myQueue);
        myQueue.push(root->data);
        inorder(root->right, myQueue);
        
    }
}

//post order traversal


// int main() {

//     int numbers[7] = {50, 30, 70, 20, 40, 60, 80}; 
//     std::queue<int> myQueue;

//     //creates an empty tree
//     Node* root = nullptr;

//     std::cout << "Inserting values into the binary tree: " << std::endl;
//     for (int num : numbers) {
//         std::cout << num << " ";
//         root = insert(root, num);
//     }
//     std::cout << std::endl;
//     std::cout << std::endl;

//     inorder(root, myQueue);

//     std::cout << "Dequeuing values from queue (should be in ascending order): " << std::endl;
//     while (!(myQueue.empty())) {
//         std::cout << myQueue.front() << " ";
//         myQueue.pop();
//     }

//     return 0;

// }