#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"


class ProductionWorker : public Employee {
private: 
    int shift;
    double hourlyPayRate;
public:
    //default constructor
    ProductionWorker();
    ProductionWorker(std::string employeeName, int employeeNumber, std::string employeeHireDate, int shift, double hourlyPayRate);
    
    //accessor functions
    int getShift() const;
    double getHourlyPayRate() const;

    //and mutator functions
    void setShift(int shift);
    void setHourlyPayRate(double hourlyPayRate);
};
#endif
