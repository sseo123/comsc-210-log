#include <iostream>
#include <queue>

//create the node struct
struct Node {
    int data;
    Node* left;
    Node* right;
};

//allocates memory for a new node and initializes its values
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

//insert the node, left if it's less than the parent node, right if it's greater than the parent node
//if there is no parent node, then initalize the binary tree with that node as the root
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

//inorder search of a binary search tree with left, node, right order
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
    //loop over array numbers and insert each value into tree
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