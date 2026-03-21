to compile cpp code: cd the file (find which one you want by ls), then g++ -o testName <.cpp files you need to compile>

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

7. try, throw, catch syntax:
    Since you don't want things to suddently break, you impliment a try, throw, and catch. Try means if you have code that might break, throw a certain output that will instaly exit the current try block and jump to the catch block. Catch will return or handle the error rather than just crashing. 
    a. If the try block throws something, then to ensure the memeory is managed correctly, c++ does something called stack unwinding. This in short just goes through the function calls and blocks to find a matching catch, then as it exits it calls the destructors for all objects that were created in the try block.  

8. function template, function overload:
    To reduce redundant code, if you need a function that performs the same thing regardless of the parameter, then you can use a function template. (DRY)
    Template:
    template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
    }
    Function overloading is when you write multiple functions with the same name, just different parameter types and number of parameters. In addition, you have to specify the parameters when you are writing each function, so each function is tailored for it's specific type and role. However, function templates allow for any type because you use a generic parameter when writing the function template. However, templates use the same logic for all types, while function overloading allows you to customize the operations for each type. You could use a function overloading when you have specific tasks you want the function to perform, and you could use function template when you have a lot of operations that do the same thing, but just with different data types. Code reusability would definitely be better if you used the function template, but the flexability would be greater for the function overloading. 

9. exception classes:
    when you create an exception clas sin the .h folder, you want to allow it to inherit the exception class traits, and you do this by "class NAME : public std::exception". In short, NAME becomes an exception. In addition, since you are inheriting from the class exception, you must redefine the error message, so you write virtual to overide the inherited error message, then const char* is a pointer to the text you overwrote, and you point it to "what()", which is the printer for the error message -- this is so if you get an error messagem you can do .what() to see what the message was. Then if you write const noexcept, this is showing that the function wont change any varaibles in the object and it will always succeed if you call what(). Override finally means it's overriding a parent class function, so if the parent class didn't have a what() function, you're still safe