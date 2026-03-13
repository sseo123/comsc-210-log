#include "ProductionWorker.h"

//in this file, the default constructor calls employee's default constructor and initalizes shift to 1 and payrate to 0.0
ProductionWorker::ProductionWorker() {
    shift = 1;
    hourlyPayRate = 0.00;
}

//the parameterized constructor passes the base fields up to Employee
ProductionWorker::ProductionWorker(std::string employeeName, int employeeNumber, std::string employeeHireDate, int shift, double hourlyPayRate) : Employee(employeeName, employeeNumber, employeeHireDate) {
    this-> shift = shift;
    this-> hourlyPayRate = hourlyPayRate;
}

//sets the shift
int ProductionWorker::getShift() const {
    return shift;
}

//sets the hourly pay rate
double ProductionWorker::getHourlyPayRate() const{
    return hourlyPayRate;
}

void ProductionWorker::setShift(int shift) {
    this-> shift = shift;
}
void ProductionWorker::setHourlyPayRate(double hourlyPayRate) {
    this-> hourlyPayRate = hourlyPayRate;
}
