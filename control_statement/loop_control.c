// loop control statement:  
/*
1. for loop:

*
#include <stdio.h>

int main(){
	
	int a = 4, b;
	for ( b = 0; b < a; b++)
	{
		printf("%d \n", b);
	
	}
	
	
	}
	*
	
	//while loop: in while the condition is tested first and then the statement underbody of the while loop will be executed
	
	#include <stdio.h>

int main(){
	
	int a;
	printf("enter a: ");
	scanf("%d", &a);
	
	while (a<=10)
	{
		
		printf("%d  \n",a);
		++a;
	}
	
}
*/
 
 
 //do while: 
 
 #include <stdio.h>

int main(){
	
	int a;
	printf("enter a: ");
	scanf("%d", &a);
	do
	{
		
	printf("%d  \n",a);
		++a;	
	}
	while(a<=5);
	return 0;
}
