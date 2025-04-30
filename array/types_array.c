/*
there are three types of array;
1. 1D array:
the array A single row of elements (like a line of houses)	i.e int marks[5];
*/
#include <stdio.h>

int main(){
	int a[] = { 3,4,5,7,8};
	int i;
	printf("the array elements are \n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",a[i]);
	
	}
	
		return 0;
	
}