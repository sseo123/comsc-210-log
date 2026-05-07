#include <iostream>
#include <string>
#include "wk15_HashTable.h"

//reusable function so the main doesn't get super cluttered
void contactFinder(HashTable& myTbl, long phoneNum) {
    std::string result = myTbl.searchTable(phoneNum);

    if (result != "no match") {
        std::cout << "Contact found: " << result << std::endl;
    } else {
        std::cout << "Contact not found." << std::endl;
    }
}


int main() {
    //create the object
    HashTable myTable;

    std::cout << "Hash Table Contact Demonstration" << std::endl;
    std::cout << std::endl;


    //check if hashtable is empty
    if (myTable.isEmpty()) {
        std::cout << "The hash table is currently empty." << std::endl;
    }


    //inserting the hash table
    std::cout << "Inserting contacts into the hash table..." << std::endl;
    std::cout << std::endl;

    myTable.insertItem(9255551234, "Maria Lopez");
    std::cout << "Inserted: 9255551234 - Maria Lopez" << std::endl;
    myTable.insertItem(5105559876, "David Kim");
    std::cout << "Inserted: 5105559876 - David Kim" << std::endl;
    myTable.insertItem(4155552468, "Aisha Patel");
    std::cout << "Inserted: 4155552468 - Aisha Patel" << std::endl;
    myTable.insertItem(9255557777, "Jordan Lee");
    std::cout << "Inserted: 9255557777 - Jordan Lee" << std::endl;
    myTable.insertItem(6505551111, "Sofia Garcia");
    std::cout << "Inserted: 6505551111 - Sofia Garcia" << std::endl;  
    std::cout << std::endl;


    //displaying the hashtable
    std::cout << "Current Hash Table:" << std::endl;
    myTable.printTable();
    std::cout << std::endl;


    //searching for the contact
    long x = 4155552468;
    std::cout << "Searching for " << x << std::endl;
    contactFinder(myTable, x);
    std::cout << std::endl;

    long y = 9255550000;
    std::cout << "Searching for " << y << std::endl;
    contactFinder(myTable, y);
    std::cout << std::endl;

    
    //removing contact 
    long z = 5105559876;
    myTable.removeItem(z);


    //updated hashtable print
    std::cout << "Updated Hash Table:" << std::endl;
    myTable.printTable();
    std::cout << std::endl;


    std::cout << "Program ended successfully." << std::endl;

}