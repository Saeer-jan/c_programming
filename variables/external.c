/*
external variable in C:
external variable is a variable that is declared outside of all functions and can 
be accessed by any function in the program.and can be accessed in multiple files.

*/
#include <stdio.h>
#include "extern.h" // Include the header file for the external variable

int add;

void main(){
    printf("the value of x is %d \n", x); // Access the external variable x
    printf("the value of y is %d \n", y); // Access the external variable y
    add = x + y; // Perform addition using the external variables
    printf("the sum of x and y is %d \n", add); // Print the result of the addition
}

