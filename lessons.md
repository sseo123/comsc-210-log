1. Why .h? 
    You use a .h file because .cpp files are independant and they don't know what's going on in each file
    for each .cpp file, your compiler generates an obj file, and these compilation units are independant

    How programs work under the hood:
    write cpp files -> compiler takes the .cpp files -> generates obj files -> linker combines them into one -> shows your program

    The problem: if you wanted to use a.cpp file function, you would have to copy the decleration of the function and paste it into all your cpp files -> but doing this returns as error because when your linker tries to link all of the obj files together, it doesn't know which one to choose because you have multiple defintions (redfintion error)
    The fix: you write the declaration of the function inside of .h, other .cpp would contain the deinftion, and the main would just #include "<function>"

2. constructors
    in wk7_program, if you created an Employee object, you don't want it to be intilized with random things, so the constructor intitlizes the Employee object with data. Constructors Intitlize the object you created
3. accessors
    if you have private data members inside of a class, you can't just access that data. So you use an accessor to retreive that data. It's a function that return the value of a private variable (called a getter function) -> you need it so other parts of the program can see the data without directly modifying it 
4. mutators 
    unlike accessors, these functions cactually change the private data members
    
5. #ifndef EMPLOYEE_H, #define EMPLOYEE_H, #endif
    the problem: if you have multiple files calling the same file, during compilation, the program will try define the same class twice or more and then run into an error.
    the fix: if EMPLOYEE_H doesn't exist or hasn't been defined yet (ifndef EMPLOYEE_H), define it right now (define EMPLOYEE_H) and then #endif at the end to close the guard rails 

    
6. this->
    I used "this->" in my .cpp files because my data member had the same name ddeclaration as the parameter being taken in. so it would be (data member = parameter) with this, or you can just switch the names into something that's not the same. this-> is used to resolve name conflicts and access data members of the current object