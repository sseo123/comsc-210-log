#include <iostream>
#include "wk15_HashTable.h"
#include <string>

HashTable::HashTable() {
    //loop through table and initalize every bucket to nullptr
    for (int i = 0; i < tableSize; i++) {
        buckets[i] = nullptr;
    }
}

bool HashTable::isEmpty() const {
    for (int i = 0; i < tableSize; i++) {
        if (buckets[i] != nullptr) {
            return false;
        }
    }

    return true;
}

int HashTable::hashFunction(long key) {
    //modulo to get the bucket location 0-9
    int bucketLocation = key % tableSize;
    return bucketLocation;
}

void HashTable::insertItem(long key, std::string value) {
    int bucketLoc = hashFunction(key);
    //linked list with the new node, setting the phone Number and Name, then going to the next Node
    Node* newNode = new Node();
    newNode->phoneNumber = key;
    newNode->name = value;
    newNode->next = buckets[bucketLoc];

    buckets[bucketLoc] = newNode;
}

void HashTable::removeItem(long key) {
    int bucketLoc = hashFunction(key);
    //current node is the first node in the linked list, aka the head
    Node* current = buckets[bucketLoc];
    //previous is nullptr so I can handle the case where we have to remove the head node in a linked list
    Node* previous = nullptr;

    //while loops through the linked list till we either reach the node we need to remove or nullptr meaning the end
    while (current != nullptr) {
        if (current->phoneNumber == key) {
            if (previous == nullptr) {
                buckets[bucketLoc] = current->next;
            } else {
                previous->next = current->next;
            }
            delete current;
            std::cout << "Contact removed." << std::endl;
            return;
        }
        previous = current;
        current = current->next;
    }

    //if we reached nullptr that means the phone number didn't exist in this buckets linekd list
    std::cout << "phone number not found" << std::endl;
}

std::string HashTable::searchTable(long key) {
    int bucketLoc = hashFunction(key);

    Node* current = buckets[bucketLoc];
    while (current != nullptr) {
        if (current->phoneNumber == key) {
            return current->name;
        }
        current = current->next;
    }

    return "no match";
}


void HashTable::printTable() {
    //display the hashtable
    for (int i = 0; i < tableSize; i++) {
        Node* current = buckets[i];
        std::cout << "Bucket " << i << ": ";
        
        
        if (current == nullptr) {
            std::cout << "empty bucket";
        } else {
            while (current != nullptr) {
                std::cout << current->phoneNumber << "--" << current->name << "; ";
                current = current->next;
            }
        }

        std::cout << std::endl;
    }
}


