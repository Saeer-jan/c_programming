//Pointer to an Array
// array: the collection of same datatype in a single variable is known as array
//It means: A single pointer that points to the whole array.
#include <stdio.h>

int main()
{
	
	int a[5] =  { 3,4,5,6,6};
	int i;
	int *p;
	p = &a;
	for (i= 0; i < 5; i++)
	{
		printf("the address of %d is %d \n", *p, p);
		p++;
	}
}