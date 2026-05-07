Write the following two programs in C++. Upload separate cpp and h files labeled wk15_HashTable.h, wk15_HashTable.cpp and wk15_program2.cpp respectively.

*Include meaningful comments throughout your code explaining the purpose of variables, logic, and major steps.

Program 1: Hash Table Contact Class

Create a C++ class named HashTable that uses separate chaining with linked lists to store phone number contacts.

Each contact should use a phone number as the key and a person’s name as the value. The key should represent a 10 digit phone number including the area code, and the value should be a string containing the person’s name.

Place the class declaration in wk15_HashTable.h and the class implementation in wk15_HashTable.cpp.

The class should include the following member functions:

HashTable();

bool isEmpty() const;

int hashFunction(int key);

void insertItem(int key, string value);

void removeItem(int key);

string searchTable(int key);

void printTable();

Use a linked list at each hash table index to handle collisions.

Program 2: Hash Table Contact Driver Program

Write a C++ driver program that uses the HashTable class from Program 1.

The driver program should create a HashTable object, populate it with several phone number contacts, and demonstrate the major member functions of the class. Your program should insert contacts, remove at least one contact, search for contacts that are in the table, search for contacts that are not in the table, and display the table contents before and after changes are made. You may hardcode the insert commands for contacts to be added to the hashtable in your driver program.

Example Run:

 

Hash Table Contact Demonstration

The hash table is currently empty.

Inserting contacts into the hash table...
Inserted: 9255551234 - Maria Lopez
Inserted: 5105559876 - David Kim
Inserted: 4155552468 - Aisha Patel
Inserted: 9255557777 - Jordan Lee
Inserted: 6505551111 - Sofia Garcia

Current Hash Table:
Index 0:
Index 1: 6505551111 - Sofia Garcia
Index 2:
Index 3: 9255551234 - Maria Lopez
Index 4: 5105559876 - David Kim
Index 5: 4155552468 - Aisha Patel
Index 6:
Index 7: 9255557777 - Jordan Lee
Index 8:
Index 9:

Searching for 4155552468...
Contact found: Aisha Patel

Searching for 9255550000...
Contact not found.

Removing 5105559876...
Contact removed.

Updated Hash Table:
Index 0:
Index 1: 6505551111 - Sofia Garcia
Index 2:
Index 3: 9255551234 - Maria Lopez
Index 4:
Index 5: 4155552468 - Aisha Patel
Index 6:
Index 7: 9255557777 - Jordan Lee
Index 8:
Index 9:

Program ended successfully.