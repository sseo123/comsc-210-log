// Chapter 13, Programming Challenge 1: Date Class
#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Date::Date(){
   int month = 1;
   int day = 1;
   int year = 0000;
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
   else {
     throw InvalidMonth();
   }
}


// Member function setDay
void Date::setDay(int d){
   if (d >= 1 && d <= 31)
         day = d;
   else{
      throw InvalidDay();
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
   cout << month << "/" << day << "/" << year << endl;
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