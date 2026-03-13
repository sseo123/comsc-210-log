Write the following two programs in C++. Upload two separate cpp and h files where applicable labeled wk7_program1.cpp, Employee.cpp, Employee.h, ProductionWorker.cpp, ProductionWorker.h, and ShiftSupervisor.cpp, ShiftSupervisor.h, wk7_program2.cpp respectively.

*Remember to comment your code.

PROGRAM NUMBER 1!!!!!
Employee and  ProductionWorker Classes

Design a class named Employee. The class should keep the following information:

• Employee name

• Employee number

• Hire date

Write one or more constructors, and the appropriate accessor and mutator functions, for the class.

Next, write a class named ProductionWorker that is derived from the Employee class. The ProductionWorker class should have member variables to hold the following information:

• Shift (an integer)

• Hourly pay rate (a double)

The workday is divided into two shifts: day and night. The shift variable will hold an integer value representing the shift that the employee works. The day shift is shift 1, and the night shift is shift 2. Write one or more constructors, and the appropriate accessor and mutator functions, for the class. Demonstrate the classes by writing a program that uses a ProductionWorker object.

Example run of wk7_program1.cpp

Employee / ProductionWorker Demo
--------------------------------
Enter employee name: Maria Chen
Enter employee number: 78421
Enter hire date (MM/DD/YYYY): 02/15/2023

Enter shift (1 = Day, 2 = Night): 2
Enter hourly pay rate: 28.75

Employee Information
--------------------------------
Name: Maria Chen
Employee Number: 78421
Hire Date: 02/15/2023
Shift: 2 (Night)
Hourly Pay Rate: $28.75


Run again? (Y/N): Y

Employee / ProductionWorker Demo
--------------------------------
Enter employee name: Jordan Patel
Enter employee number: 10503
Enter hire date (MM/DD/YYYY): 11/01/2024

Enter shift (1 = Day, 2 = Night): 3
Invalid shift. Enter 1 for Day or 2 for Night: 1

Enter hourly pay rate: -5
Invalid pay rate. Enter a value greater than or equal to 0: 19.5

Employee Information
--------------------------------
Name: Jordan Patel
Employee Number: 10503
Hire Date: 11/01/2024
Shift: 1 (Day)
Hourly Pay Rate: $19.50


Run again? (Y/N): N

Goodbye.



PROGRAM NUMBER 2!!
ShiftSupervisor Class

In a particular factory, a shift supervisor is a salaried employee who supervises a shift. In addition to a salary, the shift supervisor earns a yearly bonus when his or her shift meets production goals. Design a  class that is derived from the class you created in Programming Challenge 1 (Employee and Production Worker Classes). The  class should have a member variable that holds the annual salary, and a member variable that holds the annual production bonus that a shift supervisor has earned. Write one or more constructors and the appropriate accessor and mutator functions for the class. Demonstrate the class by writing a program that uses a  object.

Example run of wk7_program2.cpp

Shift Supervisor Demo
--------------------------------
Enter supervisor name: Alicia Gomez
Enter employee number: 99012
Enter hire date (MM/DD/YYYY): 03/10/2020

Enter annual salary: 85000
Enter annual production bonus: 7500

Supervisor Information
--------------------------------
Name: Alicia Gomez
Employee Number: 99012
Hire Date: 03/10/2020
Annual Salary: $85000.00
Annual Production Bonus: $7500.00
Total Annual Compensation: $92500.00


Run again? (Y/N): Y

Shift Supervisor Demo
--------------------------------
Enter supervisor name: Michael Tran
Enter employee number: 44567
Enter hire date (MM/DD/YYYY): 08/22/2018

Enter annual salary: -60000
Invalid salary. Enter a value greater than or equal to 0: 92000

Enter annual production bonus: -3000
Invalid bonus. Enter a value greater than or equal to 0: 12000

Supervisor Information
--------------------------------
Name: Michael Tran
Employee Number: 44567
Hire Date: 08/22/2018
Annual Salary: $92000.00
Annual Production Bonus: $12000.00
Total Annual Compensation: $104000.00


Run again? (Y/N): N

Program terminated.