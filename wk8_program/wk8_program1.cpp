#include "Date.h"
#include <iostream>


Date getValidDate(){
    int month;
    int day; 
    int year;
    bool worked = false;

    Date userDate;
    do {
        try{
            std::cout << "Date Exception Demonstration" << std::endl;

            std::cout << "Enter a month (1-12): ";
            std::cin >> month;
            std::cout << "Enter a day (1-31): ";
            std::cin >> day;
            std::cout << "Enter a year: ";
            std::cin >> year;
            std::cout << std::endl;

            userDate = Date(month, day, year);
            worked = true;
            
        }
        catch (InvalidMonth& e) {
            std::cout << e.what() << std::endl;
            std::cout << "Please try again." << std::endl;
        }
        catch (InvalidDay& e) {
            std::cout << e.what() << std::endl;
            std::cout << "Please try again." << std::endl;
        }
    } while (!worked);

    std::cout << "Date entered successfully." << std::endl;
    std::cout << "Current date: ";
    userDate.showDate1();

    return userDate;
}



// Function main
int main(){
    Date today = getValidDate();
   return 0;
}   





// // Create a Date object and initialize it
//    // using the overloaded constructor.
//    Date today(12, 25, 2014);

//    // Show the date in form #1.
//    today.showDate1();
   
//    // Store a new month, day, and year
//    // in the object.
//    today.setMonth(6);
//    today.setDay(16);
//    today.setYear(2012);
   
//    // Show the date in form #2.
//    today.showDate2();
   
//    // Show the date in form #3.
//    today.showDate3();