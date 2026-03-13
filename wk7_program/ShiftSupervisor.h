#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualProdBonus;
public:
    ShiftSupervisor();
    ShiftSupervisor(std::string employeeName, int employeeNumber, std::string employeeHireDate, double annualSalary, double annualProdBonus);

    double getAnnualSalary() const;
    double getAnnualProdBonus() const;

    void setAnnualSalary(double annualSalary);
    void setAnnualProdBonus(double annualProdBonus);
};
#endif

