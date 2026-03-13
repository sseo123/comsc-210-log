#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() {
    shift = 0;
    hourlyPayRate = 0.00;
}

ProductionWorker::ProductionWorker(std::string employeeName, int employeeNumber, std::string employeeHireDate, int shift, double hourlyPayRate) : Employee(employeeName, employeeNumber, employeeHireDate) {
    this-> shift = shift;
    this-> hourlyPayRate = hourlyPayRate;
}

int ProductionWorker::getShift() const {
    return shift;
}
double ProductionWorker::getHourlyPayRate() const{
    return hourlyPayRate;
}

void ProductionWorker::setShift(int shift) {
    this-> shift = shift;
}
void ProductionWorker::setHourlyPayRate(double hourlyPayRate) {
    this-> hourlyPayRate = hourlyPayRate;
}


