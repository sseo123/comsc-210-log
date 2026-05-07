#include <string>
#ifndef WK_15_HASHTABLE_H
#define WK_15_HASHTABLE_H

class HashTable { 
private:
    struct Node {
        //used long because int wouldn't hold the phone numbers above 2.1 billion meaning that the numbers were off
        long phoneNumber;
        std::string name;
        Node* next;
    };

    //created static const because without this the program wouldn't know what the size is at compile time and break
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