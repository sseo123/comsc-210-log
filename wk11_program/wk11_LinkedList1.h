#ifndef WK11_LINKEDLIST1_H
#define WK11_LINKEDLIST1_H

struct Node {
    int data;
    Node* next;
    
    // Constructor for Node
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;  // Private member - encapsulated
    
public:
    LinkedList();              // Constructor
    ~LinkedList();             // Destructor - IMPORTANT for cleanup
    
    void append(int val);
    void insert(int location, int val);
    void deleteAt(int deletePos);
    void display() const;
};

#endif