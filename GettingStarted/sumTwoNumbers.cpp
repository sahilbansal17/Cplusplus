// HELLO WORLD!, This is our very first program to add two numbers taken as input from user.

/*
    - #include is used to include header files enclosed in < > or " ".
    - Header files are libraries that contain some in-built functionalities.
    - iostream is the basic library for input-output related routines.
    
    - multi-line comments in C++ can be enclose using /asterisk and asterisk/ where * is representing asterisk.
    
    - single line comments can be inserted after // (two back-slashes).    
*/
#include <iostream> 

/*
    - all the input-output related routines can be called in std namespace, so
    instead of everytime using std::cin and std::cout, 
    we directly use the namespace std in the whole program.
*/
using namespace std;

// every C++ program has a main FUNCTION which gets executed when we execute the program.

/*
    - syntax of a C++ function is:
    
    functionReturnType functionName(){
        function body;
    }
*/
int main(){
    
    /*
        - syntax of declaring variables is :
        variableType variableName ;
        
        - Multiple variables of the same type can be declared in the same line, e.g:
        varType varName1, varName2, varName3 ;
        
        - EVERY VALID STATEMENT IN C++ PROGRAM IS TERMINATED BY A SEMICOLON i.e. ';'.
    */
    
    // declare three variables 
    int num1, num2, result;
    
    /*
        - Taking input from the user 
        1. cin (see - in) is used to take input from the user.
        2. >> (stream extraction) operator has to be used along with the variable name in which input is to be stored.
        3. multiple variables can be taken as input in different variables in the same cin statement using:
            cin >> varName1 >> varName2 >> varName3 ;
    */
    
    // take two numbers as input from standard input (console)
    cin >> num1 >> num2;
    
    /*
        - Assignment statements:
        
            a = b + c;
        
        - The result 'b + c' is computed first and then stored into the variable 'a'.
    */
    
    // assign the sum of numbers to the variable result
    result = num1 + num2;
    
    /*
        - Displaying output to the user (cout - usage similar to cin)
        1. cout (see - out) is used.
        2. << (stream insertion) operator has to be used along with the output.
        3. 
            - THE OUTPUT WHICH IS A CONSTANT STRING HAS TO BE ENCLOSE IN DOUBLE QUOTES.
            - To display the value of a variable, it has to be written without double quotes.
            (Caution!) Both the notation should not be mixed.
        4. Example of a general cout statement:
            cout << "This is a constant string" << variable << "not a variable" ;
    */
    
    // display the result on the standard output (console)
    cout << "The sum of the given numbers is: " << result << "\n";
    
    // '\n' refers to the newline escape character 
    
    // since this main function has a return type of integer, it must return some integer
    return 0;
}

/*
    TO RUN THIS PROGRAM, 
    open the terminal, move to the directory where this file is stored and type the following command:
        $ g++ sumTwoNumbers.cpp
    
    Now, an executable named a.out will be created.
    To run it, type
        $ ./a.out 
        
    You then have to enter two numbers.
    Enter the numbers. e.g.:
        5
        6
    
    You will get the following output:
        The sum of the given numbers is: 11

    Thank you. See you in the next program!
*/