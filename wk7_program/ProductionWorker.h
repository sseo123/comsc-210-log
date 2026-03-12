#include "Employee.h"

class ProductionWorker : public Employee {
private: 
    int shift;
    double hourlyPayRate;
public:
    ProductionWorker();
    ProductionWorker(std::string employeeName, int employeeNumber, std::string employeeHireDate, int shift, double hourlyPayRate);

    int getShift() const;
    double getHourlyPayRate() const;

    void setShift(int shift);
    void setHourlyPayRate(double hourlyPayRate);
};
