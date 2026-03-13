#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <string>
#include "ProductionWorker.h"


int main() {
    std::string input;
    
    do {
        ProductionWorker human;
        std::string employeeName;
        int employeeNumber;
        std::string employeeHireDate;
        int shift;
        double hourlyPayRate;
        cout << "Employee / ProductionWorker Demo" << endl;
        cout << "--------------------------------" << endl;
        cout << "Enter employee name: ";
        getline(cin, employeeName);
        human.setEmployeeName(employeeName);
        cout << "Enter employee number: ";
        cin >> employeeNumber;
        human.setEmployeeNumber(employeeNumber);
        cout << "Enter hire date (MM/DD/YYYY): ";
        cin >> employeeHireDate;
        human.setEmployeeHireDate(employeeHireDate);
        cout << endl;


        cout << "Enter shift(1 = Day, 2 = Night): ";
        cin >> shift;
        while (shift != 1 && shift != 2) {
            cout << "Invalid shift. Enter 1 for Day or 2 for Night: ";
            cin >> shift;
        }
        human.setShift(shift);
        cout << "Enter hourly pay rate: ";
        cin >> hourlyPayRate;
        while (hourlyPayRate < 0) {
            cout << "Invalid pay rate. Enter a value greater than or equal to 0: ";
            cin >> hourlyPayRate;
        }
        human.setHourlyPayRate(hourlyPayRate);
        cout << endl;

        
        cout << "Employee Information" << endl;
        cout << "--------------------------------" << endl;
        cout << "Name: " << human.getEmployeeName() << endl;
        cout << "Employee Number: " << human.getEmployeeNumber() << endl;
        cout << "Hire Date: " << human.getEmployeeHireDate() << endl;
        cout << "Shift: " << human.getShift();
        if (human.getShift() == 1) {
            cout << " (Day)" << endl;
        }
        else {
            cout << " (Night)" << endl;
        }
        cout << "Hourly Pay Rate: $" << human.getHourlyPayRate() << endl;
        cout << endl;
        cout << endl;


        cout << "Run Again? (Y/N): ";
        cin >> input;
        cin.ignore();

    } while (input == "y" || input == "Y");
    cout << "Goodbye" << endl;

    return 0;
}