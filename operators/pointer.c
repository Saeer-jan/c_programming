/*
1. Pointer Definition:
A pointer is a variable that stores the memory address of another variable.
The variable can be of any data type like int, char, float, array, struct, etc.

Simply:
Pointer = A variable that holds address of another variable.

2. Why Pointers? (Importance)
Increases program speed (especially in large data operations).
Saves memory by handling data addresses instead of copying full data.
Helps in dynamic memory allocation (like creating memory at run-time).
Useful in arrays, strings, functions, and structures.


*/

#include <stdio.h>

int main(){
	int a = 5;
	int *b;
	b = &a;
	printf("ponter b variable holding the address of varible a %d\n", b);
	printf(" address of the variable is a %d\n", &a);
	printf(" value of a is %d ", *b);
}