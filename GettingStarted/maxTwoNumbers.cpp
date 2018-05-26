// continuing the journey to learn C++
// just using two numbers !! ;)
// Now, we want to find the maximum of two numbers.

#include <iostream>
using namespace std;

int main(){
  
    int num1, num2;
    cout << "Please enter two numbers:\n"; // prompt user to enter numbers
    cin >> num1 >> num2;
  
    /*
        So, now, let us learn about CONDITIONAL STATEMENTS and RELATIONAL OPERATORS
        How do you check which number is larger among two numbers?
        Well, that is common sense. You can simply tell by seeing the numbers.
        But, computer is a dumb machine, it needs to be told everything step by step.
        
        There is a logical operator greater than (>) similar to addition operator (+),
        like the addition operator returns sum of numbers, the greater than operator...
        when applied in the fashion (a > b)...
        ...It seems you are thinking right! It returns 0 or 1, 0 when a is not greater
        than b and 1 when a is actually greater than b.
        
        So, any relational operator(>, <, <=, >=, ==, !=) returns a boolean value, 
            - 0 when the relation doesn't hold
            - 1 when the relation holds.
        
        NOTE(*): 
            - To check whether 2 numbers are equal, we use == (two equal signs without space)
            since we already have used = (single equal sign) as assignment operator.
            - We also have operator to check whether 2 numbers are not equal, 
            "!=" is this magical operator. 
      
        Now, that we know how to tell computer to compare two numbers, what next?
        It will just tell whether num1 > num2 or not! But, we want to print the max no!
        So, we introduce you the magical and the powerful: conditional statements, 
        the most important one is "if then else".
        Well, if num1 > num2 then num1 will be the max 
            otherwise num2 would be the max. 
            
        Syntax of "if then else" in C++ is thus pretty straight-forward:
            if(boolean condition){
                block of statements to be executed when condition is true;
            }
            else{
                block of statements to be executed when condition is false;
            }
        
        NOTE(**): If there is only one statment to be written inside these blocks, 
            we can omit the curly braces ({ }), but it is suggested to use them 
            for better readability of code. 
            
        So, we can now continue with the program:
    */
  
    int max; // to store the maximum out of the two
    
    // conditional statement 
    if(num1 > num2){   
        max = num1;
    }
    else{
        max = num2;
    }
    
    cout << "The maximum no. is: " << max << "\n";
  
    /*
        Note that the following piece of code can be replaced with lines 56 to 61 
        without affecting the working of the program (using Note **):
        
        if(num1 > num2) max = num1;
        else max = num2;
    */
    
    // TRY IT YOURSELF:
    
    /*
        In this code, we used "if then else" conditional,
        there are two other similar type of conditionals:
            - "if" conditional 
            - "if else if" conditional
        
        In the "if conditional", there is only the if part and the else part
        is not required. 
        
        Try writing the same program using an "if conditional".
        
        HINT: You can also initialize variables. for eg. 
            
            int number = num1; 
            
            The above line of code declares an integer variable named "number"
            that is initialized with the value of the variable "num1", provided
            "num1" is already declared above.  
    */
    return 0;
}

// Thank you. Keep Learning! See you in the next program!