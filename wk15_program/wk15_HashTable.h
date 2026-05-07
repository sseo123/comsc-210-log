#include <string>
#ifndef WK_15_HASHTABLE_H
#define WK_15_HASHTABLE_H

class HashTable { 
private:
    struct Node {
        long phoneNumber;
        std::string name;
        Node* next;
    };

    static const int tableSize = 10;
    Node* buckets[tableSize];

public:
    HashTable();
    bool isEmpty() const;
    int hashFunction(long key);
    void insertItem(long key, std::string value);
    void removeItem(long key);
    std::string searchTable(long key);
    void printTable();
};


#endif