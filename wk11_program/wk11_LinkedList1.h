#ifndef WK11_LINKEDLIST1_H
#define WK11_LINKEDLIST1_H

struct Node {
    int data;
    Node* next;
    
   
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    
public:
    LinkedList();
    ~LinkedList();
    
    void append(int val);
    void insert(int location, int val);
    void deleteAt(int deletePos);
    void display() const;
};

#endif