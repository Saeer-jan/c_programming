#include <stdio.h>
/*
structure is the collection of elements of having same or different data type
int
float
char

structure with in structure
*/

struct student
{
	char name[15];
	int age;
	int roll_no;
}s1 = {"saeer",21,6145};

int main()
{
	
	printf("name is %s\n",s1.name);
	printf("the age is %d\n",s1.age);
	printf("the roll_number is %d\n", s1.roll_no);
}
