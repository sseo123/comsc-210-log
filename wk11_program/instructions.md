Write the following two programs in C++. Upload two separate cpp and h files where applicable labeled wk11_LinkedList1.h, wk11_LinkedList1.cpp, wk11_driver1.cpp wk11_wk11_LinkedList2.h, wk11_LinkedList2.cpp, and wk11_driver2.cpp respectively.

Include meaningful comments throughout your code explaining the purpose of variables, logic, and major steps.

PROGRAM 1
Your Own Linked List

Design your own linked list class to hold a series of integers. The class should have member functions for appending, inserting, and deleting nodes. Don’t forget to add a destructor that destroys the list. Demonstrate the class with a driver program. See output of an example driver program below.

========================================
CUSTOM LINKED LIST MANAGER (Program 1)
========================================

1. Append a value
2. Insert a value at a position
3. Delete a value at a position
4. Display the list
5. Exit

---

Enter your choice: 1
Enter value to append: 10
Value appended.

1. Append a value
2. Insert a value at a position
3. Delete a value at a position
4. Display the list
5. Exit

---

Enter your choice: 1
Enter value to append: 20
Value appended.

1. Append a value
2. Insert a value at a position
3. Delete a value at a position
4. Display the list
5. Exit

---

Enter your choice: 1
Enter value to append: 30
Value appended.

1. Append a value
2. Insert a value at a position
3. Delete a value at a position
4. Display the list
5. Exit

---

Enter your choice: 4
Current list: 10 -> 20 -> 30

---

Enter your choice: 2
Enter value to insert: 15
Enter position to insert at: 2
Value inserted.

---

Enter your choice: 4
Current list: 10 -> 15 -> 20 -> 30

---

Enter your choice: 3
Enter position to delete: 1
Node deleted.

---

Enter your choice: 4
Current list: 15 -> 20 -> 30

---

Enter your choice: 2
Enter value to insert: 5
Enter position to insert at: 0
Value inserted.

---

Enter your choice: 4
Current list: 5 -> 15 -> 20 -> 30

---

Enter your choice: 3
Enter position to delete: 10
Position out of range. Nothing deleted.

---

Enter your choice: 5
Exiting program...
Destroying linked list...
All nodes deleted.

Program 2: List Reverse and Search

Modify the linked list class you created in Program 1 to add two member functions. The first member function should be named reverse that rearranges the nodes in the list so their order is reversed. The second member function is named search that returns the position of a specific value, x, in the linked list. The first node in the list is at position 0, the second node is at position 1, and so on. If x is not found on the list, the search should return −1. Demonstrate both functions in a simple driver program.

See output of an example driver program below.

========================================
CUSTOM LINKED LIST MANAGER (Program 2)
========================================

1. Append a value
2. Insert a value at a position
3. Delete a value at a position
4. Display the list
5. Reverse the list
6. Search for a value
7. Exit

---

Enter your choice: 4
Current list is empty.

---

Enter your choice: 1
Enter value to append: 10
Value appended.

---

Enter your choice: 1
Enter value to append: 20
Value appended.

---

Enter your choice: 1
Enter value to append: 30
Value appended.

---

Enter your choice: 4
Current list: 10 -> 20 -> 30

---

Enter your choice: 2
Enter value to insert: 15
Enter position to insert at: 1
Value inserted.

---

Enter your choice: 4
Current list: 10 -> 15 -> 20 -> 30

---

Enter your choice: 6
Enter value to search for: 20
Value found at position: 2

---

Enter your choice: 5
Reversing the list...
List reversed successfully.

---

Enter your choice: 4
Current list: 30 -> 20 -> 15 -> 10

---

Enter your choice: 6
Enter value to search for: 10
Value found at position: 3

---

Enter your choice: 3
Enter position to delete: 0
Node deleted.

---

Enter your choice: 4
Current list: 20 -> 15 -> 10

---

Enter your choice: 6
Enter value to search for: 100
Value not found. Returned: -1

---

Enter your choice: 7
Exiting program...
Destroying linked list...
All nodes deleted.
