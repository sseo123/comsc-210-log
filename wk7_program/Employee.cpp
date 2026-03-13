#include "Employee.h"
#include <string>

Employee::Employee() {
    employeeName = "";
    employeeNumber = 0;
    employeeHireDate = "";
}

Employee::Employee(std::string employeeName, int employeeNumber, std::string employeeHireDate){
    this-> employeeName = employeeName;
    this-> employeeNumber = employeeNumber;
    this-> employeeHireDate = employeeHireDate;
}

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
