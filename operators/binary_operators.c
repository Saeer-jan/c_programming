/*
2. binary operators: these are operators that operate on two operands.
for example, the addition operator (+) adds two numbers together.
go in depth and explain the binary operators in C programming language.

*/
#include <stdio.h>

int main(){

    int a, b ,c;
    printf("enter the first number: ");
    scanf("%d %d", &a, &b); // take input from user as here a and b are two operands and & is 
// to get the address of a and b. but why address of a and b? because we want to store the
// value of a and b in the memory location of a and b. so we need to use the address of operator (&). 
    c = a + b; // here + is the binary operator and a and b are the operands.
    printf("the sum of %d and %d is %d \n ", a, b , c); // here %d is the format specifier for
    c = a - b; // here - is the binary operator and a and b are the operands.
    printf("the difference of %d and %d is %d\n ", a, b , c); // here %d is the format specifier for
    c = a * b; // here * is the binary operator and a and b are the operands.
    printf("the product of %d and %d is %d\n ", a, b , c); // here %d is the format specifier for
    c = a / b; // here / is the binary operator and a and b are the operands.
    printf("the division of %d and %d is %d\n ", a, b , c); // here %d is the format specifier for
   
}