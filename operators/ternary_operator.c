/*
ternary operator:
When you want to assign a value quickly based on a condition.
When you want small and clean code.
Inside printf or functions without writing extra if-else.

this is like the if else condition but we use this in single line of code, 
inside printf..
*/

#include <stdio.h>

int main()
{
	
	int a, b;
	
	printf("enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	(a>b)? printf("%d > %d is %d \n", a, b, a>b): printf("%d < %d is %d\n", a, b, a<b);
	return 0;
}