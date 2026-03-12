#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
private:
    std::string employeeName;
    int employeeNumber;
    std::string employeeHireDate;
public:
    Employee();
    Employee(std::string employeeName, int employeeNumber, std::string employeeHireDate);
    std::string getEmployeeName() const;
    int getEmployeeNumber() const;
    std::string getEmployeeHireDate() const;

    void setEmployeeName(std::string employeeName);
    void setEmployeeNumber(int employeeNumber);
    void setEmployeeHireDate(std::string employeeHireDate);
};

#endif