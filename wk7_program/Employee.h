#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
private:
//employee's full name, ID number, and hire date
    std::string employeeName;
    int employeeNumber;
    std::string employeeHireDate;
public:
    //default constructor
    Employee();
    //parameterized constructor
    Employee(std::string employeeName, int employeeNumber, std::string employeeHireDate);
    
    //acessor functions 
    std::string getEmployeeName() const;
    int getEmployeeNumber() const;
    std::string getEmployeeHireDate() const;

    //mutator functions
    void setEmployeeName(std::string employeeName);
    void setEmployeeNumber(int employeeNumber);
    void setEmployeeHireDate(std::string employeeHireDate);
};

#endif