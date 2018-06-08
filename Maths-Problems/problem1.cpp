/* Write a program that calculates and prints the sum of all the natural numbers 
 * divisible by either 3 or 7, upto a given limit entered by user. */
 
#include <iostream>
using namespace std;

int main(){
    long int maxValue; /* the maximum value upto which numbers will be searched */
    long int requiredSum = 0;
    
    /* Take the limit, i.e. maxValue as input from user */
    cout << "Enter the limit upto which the sum of natural numbers divisible by either 3 or 7 is required: ";
    cin >> maxValue;
    
    /* A brute force strategy is to write a loop from 1 to maxValue 
     * that checks if the number is divisible by either 3 or 7
     * then increment the requiredSum by that number */
     
    for(int num = 1; num <= maxValue; num ++){
        if(num % 3 == 0 || num % 7 == 0){
            requiredSum += num;
        }
    } 
    
    /* Print the result on the screen */
    cout << "\nThe required sum is: " << requiredSum << "\n";
    
    return 0;
}