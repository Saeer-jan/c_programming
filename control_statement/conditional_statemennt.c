/*
conditional statements:
1. switch:
it is used for multi way branching,

*/
#include <stdio.h>

int main(){
	
	int a;
	printf("enter a: ");
	scanf("%d", &a);
	
	switch(a){
		
		case 1:
			printf(" the value n is 1");
			break;
			
		case 2:
			printf(" the value n is 2");
			break;
			
		case 3:
			printf(" the value n is 3");
			break;
			
		default:
			printf("the value is invalid");

	
	}
	}