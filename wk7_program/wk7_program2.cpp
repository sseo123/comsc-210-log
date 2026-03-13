#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <string>
#include "ShiftSupervisor.h"
#include <iomanip>


int main() {
    std::string input;


    do {
        ShiftSupervisor supervisor;
        std::string supervisorName;
        int employeeNumber;
        std::string employeeHireDate;
        double annualSalary;
        double annualProdBonus;
        cout << "Shift Supervisor Demo" << endl;
        cout << "--------------------------------" << endl;
        cout << "Enter supervisor name: ";
        getline(cin, supervisorName);
        supervisor.setEmployeeName(supervisorName);
        cout << "Enter employee number: ";
        cin >> employeeNumber;
        supervisor.setEmployeeNumber(employeeNumber);
        cout << "Enter hire date (MM/DD/YYYY): ";
        cin >> employeeHireDate;
        supervisor.setEmployeeHireDate(employeeHireDate);
        cout << endl;


        cout << "Enter annual salary: ";
        cin >> annualSalary;
        while (annualSalary < 0) {
            cout << "Enter a value greater than or equal to 0: ";
            cin >> annualSalary;
        }
        supervisor.setAnnualSalary(annualSalary);
        cout << "Enter annual production bonus: ";
        cin >> annualProdBonus;
        while (annualProdBonus < 0) {
            cout << "Enter a value greater than or equal to 0: ";
            cin >> annualProdBonus;
        }
        supervisor.setAnnualProdBonus(annualProdBonus);
        cout << endl;


        cout << "Supervisor Information" << endl;
        cout << "--------------------------------" << endl;
        cout << "Name: " << supervisor.getEmployeeName() << endl;
        cout << "Employee Number: " << supervisor.getEmployeeNumber() << endl;
        cout << "Hire Date: " << supervisor.getEmployeeHireDate() << endl;
        cout << "Annual Salary: $" << std::fixed << std::setprecision(2) << supervisor.getAnnualSalary() << endl;
        cout << "Annual Production Bonus: $" << std::fixed << std::setprecision(2) << supervisor.getAnnualProdBonus() << endl;
        double total = supervisor.getAnnualSalary() + supervisor.getAnnualProdBonus();
        cout << "Total Annual Compensation: $" << std::fixed << std::setprecision(2) << total << endl;
        cout << endl;
        cout << endl;


        cout << "Run Again? (Y/N): ";
        cin >> input;
        cin.ignore();

    } while (input == "y" || input == "Y");
    cout << "Program terminated." << endl;

    return 0;
}