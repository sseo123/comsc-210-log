#include "wk11_LinkedList2.h"
#include <iostream>
using namespace std;


LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* current = head;
    
    // Traverse through the entire list
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    
    head = nullptr;
}

// Appends a new node with the given value to the end of the list
void LinkedList::append(int value) {

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    
    // If the list is empty then you can just make the new node the head
    if (head == nullptr) {
        head = newNode;
    } else {
        // Traverse to the end of the list
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        
        //Attach the new node at the end
        current->next = newNode;
    }
}

void LinkedList::insert(int value, int position) {

    if (position < 0) {
        cout << "Invalid position. Position must be at least 0." << endl;
        return;
    }
    
    // Create a new node with the given value
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    
    // If inserting at position 0, insert before the head
    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    
    Node* current = head;
    int currentPos = 0;
    
    while (current != nullptr && currentPos < position - 1) {
        current = current->next;
        currentPos++;
    }
    
    // Check if position is valid (can't insert past the end + 1)
    if (current == nullptr) {
        cout << "Invalid position. Position out of range." << endl;
        delete newNode;
        return;
    }
    
    // Insert the new node by adjusting pointers
    newNode->next = current->next;
    current->next = newNode;
}


void LinkedList::deleteAt(int position) {

    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }
    
    // Check if position is valid
    if (position < 0) {
        cout << "Position out of range. Nothing deleted." << endl;
        return;
    }
    
    // If deleting the head node
    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    Node* current = head;
    int currentPos = 0;
    
    while (current != nullptr && currentPos < position - 1) {
        current = current->next;
        currentPos++;
    }
    
    // Check if position is valid and the next node exists
    if (current == nullptr || current->next == nullptr) {
        cout << "Position out of range. Nothing deleted." << endl;
        return;
    }
    
    // Delete the node by adjusting pointers
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}

void LinkedList::display() const {
    cout << "Current list: ";
    
    // If the list is empty, display a message
    if (head == nullptr) {
        cout << "is empty." << endl;
        return;
    }
    
    // Traverse through the list and print each value
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        
        if (current->next != nullptr) {
            cout << " -> ";
        }
        
        current = current->next;
    }
    
    cout << endl;
}

void LinkedList::reverse() {

    if (head == nullptr || head->next == nullptr) {
        return;
    }
    
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) {
        // Save the next node before we change current->next
        next = current->next;
        
        current->next = prev;
        
        prev = current;
        current = next;
    }
    
    head = prev;
}

int LinkedList::search(int value) const {
    Node* current = head;
    int position = 0;
    
    // Traverse the entire list looking for the value
    while (current != nullptr) {
        // Check if the current node's data matches the search value
        if (current->data == value) {
            return position;
        }
        
        // Move to the next node and increment position
        current = current->next;
        position++;
    }
    
    return -1;
}