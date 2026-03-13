#include "Employee.h"
#include <string>

//this is the Default constructor to initializes all fields to empty strings
Employee::Employee() {
    employeeName = "";
    employeeNumber = 0;
    employeeHireDate = "";
}
//parameterized constructor
//I used "this->" in my .cpp files because my data member had the same name ddeclaration as the parameter being taken in. so it would be (data member = parameter) with this, or you can just switch the names into something that's not the same. this-> is used to resolve name conflicts and access data members of the current object
Employee::Employee(std::string employeeName, int employeeNumber, std::string employeeHireDate){
    this-> employeeName = employeeName;
    this-> employeeNumber = employeeNumber;
    this-> employeeHireDate = employeeHireDate;
}

//these are the accesor functions that allow other parts of the program to read the data but not modify it
std::string Employee::getEmployeeName() const {
    return employeeName;
}
int Employee::getEmployeeNumber() const {
    return employeeNumber;
}
std::string Employee::getEmployeeHireDate() const{
    return employeeHireDate;
}


void Employee::setEmployeeName(std::string employeeName) {
    this-> employeeName = employeeName;
}
void Employee::setEmployeeNumber(int employeeNumber) {
    this-> employeeNumber = employeeNumber;
}
void Employee::setEmployeeHireDate(std::string employeeHireDate){
    this-> employeeHireDate = employeeHireDate;
}
