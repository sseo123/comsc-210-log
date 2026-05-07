#include <iostream>
#include "wk15_HashTable.h"
#include <string>

HashTable::HashTable() {
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

int HashTable::hashFunction(int key) {
    int bucketLocation = key % tableSize;
    return bucketLocation;
}

void HashTable::insertItem(int key, std::string value) {
    int bucketLoc = hashFunction(key);

    Node* newNode = new Node();
    newNode->phoneNumber = key;
    newNode->name = value;
    newNode->next = buckets[bucketLoc];

    buckets[bucketLoc] = newNode;
}

void HashTable::removeItem(int key) {
    int bucketLoc = hashFunction(key);
    Node* current = buckets[bucketLoc];
    Node* previous = nullptr;

    while (current != nullptr) {
        if (current->phoneNumber == key) {
            if (previous == nullptr) {
                buckets[bucketLoc] = current->next;
            } else {
                previous->next = current->next;
            }
            delete current;
            std::cout << "deleted successfully" << std::endl;
            return;
        }
        previous = current;
        current = current->next;
    }

    std::cout << "phone number not found" << std::endl;

}

std::string HashTable::searchTable(int key) {
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


