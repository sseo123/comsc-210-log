#include <string>
#ifndef WK_15_HASHTABLE_H
#define WK_15_HASHTABLE_H

class HashTable { 
private:
    struct Node {
        int phoneNumber;
        std::string name;
        Node* next;
    };

    static const int tableSize = 10;
    Node* buckets[tableSize];

public:
    HashTable();
    bool isEmpty() const;
    int hashFunction(int key);
    void insertItem(int key, std::string value);
    void removeItem(int key);
    std::string searchTable(int key);
    void printTable();
};


#endif