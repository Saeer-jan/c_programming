//decision making control statements:
/*

//1. if eles statements: if the conditoin is true or false 

//program:

#include <stdio.h>

int main(){
	
	int a, b;
	printf("enter a and b");
	scanf("%d %d", &a , &b);
	if (a>b)
	{
		printf("%d is greator than %d",a,b);b8
	
	}
}
/


//2. if else statement :


#include <stdio.h>

int main(){
	
	int a, b;
	printf("enter a and b");
	scanf("%d %d", &a , &b);
	if (a>b)
	{
		printf("%d is greator than %d",a,b);
	
	}
	else
	{
		printf("%d is less than %d", a,b);
	}
}
*/


//3. nested if else statement:



#include <stdio.h>

int main(){
	
	int a, b;
	printf("enter a and b");
	scanf("%d %d", &a , &b);
	if (a!=b)
	{
		printf("%d is not equall to %d",a,b);
		
		if (a>b){
			printf("%d is greator than %d",a,b);
		}
		else
		{
			printf("%d is less than %d", a, b);
		}
	
	}
	else
	{
		printf("%d is equal to  %d", a,b);
	}
}

