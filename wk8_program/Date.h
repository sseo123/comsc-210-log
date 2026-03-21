#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>


class InvalidDay : public std::exception{
public:
    //virtual function that overrides the base exception class's what(), and later the what() function is called to get the error message
    virtual const char* what() const noexcept override {
        return "Error: Invalid day entered.";
    }
};

class InvalidMonth : public std::exception {
public:
    virtual const char* what() const noexcept override {
        return "Error: Invalid month entered";
    }
};

const int NUM_MONTHS = 12;

class Date{
private:
    int month;
    int day;
    int year;
    std::string names[NUM_MONTHS];

    void setNames();
public:
   // Constructors
   Date();
   Date(int, int, int);
   
   // Mutators
   void setMonth(int m);
   void setDay(int d);
   void setYear(int y);

   // Functions to print the date
   void showDate1();
   void showDate2();
   void showDate3();
};

#endif