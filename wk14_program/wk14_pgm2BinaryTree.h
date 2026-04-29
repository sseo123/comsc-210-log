#ifndef WK14_PROGRAM_H
#define WK14_PROGRAM_H
#include <iostream>


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
void inorder(Node<T>* root) {
    if (root != nullptr) {
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
        
    }
}

//pre order traversal
template <typename T>
void preorder(Node<T>* root) {
    if (root != nullptr) {
        std::cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

//post order traversal
template <typename T>
void postorder(Node<T>* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        std::cout << root->data << " ";
    }
}

#endif