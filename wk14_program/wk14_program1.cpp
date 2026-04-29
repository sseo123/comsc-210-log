#include <iostream>
#include <queue>

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int data) {
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

void inorder(Node* root, std::queue<int>& myQueue) {
    if (root != nullptr) {
        inorder(root->left, myQueue);
        myQueue.push(root->data);
        inorder(root->right, myQueue);
        
    }
}

int main() {

    int numbers[7] = {50, 30, 70, 20, 40, 60, 80}; 
    std::queue<int> myQueue;

    //creates an empty tree
    Node* root = nullptr;

    std::cout << "Inserting values into the binary tree: " << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
        root = insert(root, num);
    }
    std::cout << std::endl;
    std::cout << std::endl;

    inorder(root, myQueue);

    std::cout << "Dequeuing values from queue (should be in ascending order): " << std::endl;
    while (!(myQueue.empty())) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }

    return 0;

}