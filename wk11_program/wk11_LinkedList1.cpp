#include "wk11_LinkedList1.h"
#include <iostream>


LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* curr = head;
    while (curr != nullptr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }
}

void LinkedList::append(int appendVal) {
    Node* newNode = new Node(appendVal);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* currNode = head;
    while (currNode->next != nullptr) {
        currNode = currNode->next;
    }

    currNode->next = newNode;
}

void LinkedList::insert(int location, int insertVal) {
    Node* newNode = new Node(insertVal);

    if ((location - 1) == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* curr = head;
    for (int i = 0; i < location - 1; i++) {
        if (curr == nullptr) {
            std::cout << "Position out of range." << std::endl;
            delete newNode;
            return;
        }
        curr = curr->next;
    }

    newNode->next = curr->next;
    curr->next = newNode;
}

void LinkedList::deleteAt(int deletePosition) {
    if (head == nullptr) {
        std::cout << "List is empty." << std::endl;
        return;
    }

    Node* curr = head;

    if (deletePosition == 1) {
        head = curr->next;
        delete curr;
        return;
    }

    for (int i = 0; i < deletePosition - 2; i++) {
        if (curr == nullptr || curr->next == nullptr) {
            std::cout << "Position out of range." << std::endl;
            return;
        }
        curr = curr->next;
    }

    if (curr->next == nullptr) {
        std::cout << "Position out of range." << std::endl;
        return;
    }

    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
}

void LinkedList::display() const {

    if (head == nullptr) {
        std::cout << "(empty)" << std::endl;
        return;
    }

    Node* curr = head;
    while (curr != nullptr) {
        std::cout << curr->data;
        if (curr->next != nullptr) {
            std::cout << " -> ";
        }
        curr = curr->next;
    }
    std::cout << std::endl;
}