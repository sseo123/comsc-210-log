// Chapter 13, Programming Challenge 1: Date Class
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Date::Date(){
   int month;
   int day;
   int year;
   setNames();
}

// Overloaded constructor
// Parameters: m is the month
//             d is the day
//             y is the year

Date::Date(int m, int d, int y){
   setMonth(m);
   setDay(d);
   setYear(y);
   setNames();
}

// Member function setNames
// This function assigns the names
// of the months to the names
// arrays

void Date::setNames(){
   names[0] = "January";
   names[1] = "Febraury";
   names[2] = "March";
   names[3] = "April";
   names[4] = "May";
   names[5] = "June";
   names[6] = "July";
   names[7] = "August";
   names[8] = "September";
   names[9] = "October";
   names[10] = "November";
   names[11] = "December";
}


// Member function setMonth

void Date::setMonth(int m){
   if (m >= 1 && m <= 12)
      month = m;
   else
   {
      cout << m << " is not a valid "
           << "value for the month.\n";
      exit (EXIT_FAILURE);
   }
}

// Member function setDay

void Date::setDay(int d){
   if (d >= 1 && d <= 31)
         day = d;
   else
   {
      cout << d << " is not a valid "
           << "value for the day.\n";
      exit(EXIT_FAILURE);
   }
}

// Member function setYear

void Date::setYear(int y){
   year = y;
}

// Member function showDate1
// Displays the date in the form
// MM/DD/YY
// Example: 12/25/2014

void Date::showDate1(){
   cout << month << "/" 
        << day << "/" 
        << year << endl;
}

// Member function showDate2
// Displays the date in the following
// form: December 25, 2014

void Date::showDate2(){
   cout << names[month+1]
        << " " << day << ", "
        << year << endl;
}

// Member function showDate3
// Displays the date in the following
// form: 25 December, 2014


void Date::showDate3(){
   cout << day << " " 
        << names[month+1] 
        << " " << year << endl;
}


// Function main

int main(){
   // Create a Date object and initialize it
   // using the overloaded constructor.
   Date today(12, 25, 2014);

   // Show the date in form #1.
   today.showDate1();
   
   // Store a new month, day, and year
   // in the object.
   today.setMonth(6);
   today.setDay(16);
   today.setYear(2012);
   
   // Show the date in form #2.
   today.showDate2();
   
   // Show the date in form #3.
   today.showDate3();
   return 0;
}
