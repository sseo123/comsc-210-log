#include "wk11_LinkedList1.h"
#include <iostream>

// Constructor
LinkedList::LinkedList() {
    head = nullptr;
}

// Destructor - CRITICAL for memory cleanup
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
            cout << "Position out of range." << endl;
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
        cout << "List is empty." << endl;
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
            cout << "Position out of range." << endl;
            return;
        }
        curr = curr->next;
    }

    if (curr->next == nullptr) {
        cout << "Position out of range." << endl;
        return;
    }

    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
}

void LinkedList::display() const {
    cout << "Current list: ";
    if (head == nullptr) {
        cout << "(empty)" << endl;
        return;
    }

    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " -> ";
        }
        curr = curr->next;
    }
    cout << endl;
}