#ifndef WK11_LINKEDLIST2_H
#define WK11_LINKEDLIST2_H


struct Node {
    int data;
    Node* next;
};


class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void append(int value);
    void insert(int value, int position);
    void deleteAt(int position);
    void display() const;
    void reverse();
    int search(int value) const;
    
};

#endif