#include "ShiftSupervisor.h"

// the edfault constructor calls employee default constructor and initializes salary and bonus to 0.0
ShiftSupervisor::ShiftSupervisor() {
    annualSalary = 0.00;
    annualProdBonus = 0.00;
}   

//the parameterized constructor passes base fields up to employee
ShiftSupervisor::ShiftSupervisor(std::string employeeName, int employeeNumber, std::string employeeHireDate, double annualSalary, double annualProdBonus) : Employee(employeeName, employeeNumber, employeeHireDate) {
    this-> annualSalary = annualSalary;
    this-> annualProdBonus = annualProdBonus;
}

double ShiftSupervisor::getAnnualSalary() const {
    return annualSalary;
}
double ShiftSupervisor::getAnnualProdBonus() const {
    return annualProdBonus;
}

void ShiftSupervisor::setAnnualSalary(double annualSalary) {
    this-> annualSalary = annualSalary;
}
void ShiftSupervisor::setAnnualProdBonus(double annualProdBonus) {
    this-> annualProdBonus = annualProdBonus;
}


