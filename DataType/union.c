/*
union:
union is the special data type that holds elements of different data type at the same memory location , same as struct but memory 

*/

#include <stdio.h>

struct student
{
	char name[15];
	int age;
	int roll_no;
}s1 = {"saeer",21,6145};


union stud
{
	char name[15];
	int age;
	int roll_no;
}s2 = {"saeer",21,6145};

void main()
{
	printf("the size of structure student is%d \n", sizeof(struct student));
	printf("the size of union student is%d \n", sizeof(union stud));
}
