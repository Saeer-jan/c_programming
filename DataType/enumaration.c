//enum :  is used for the used defined data types as if the data type is not present in the built in we define it through enum by using enum as a keyword  actually this is 
// enumaration 

#include <stdio.h>

int main(){
	
	enum months {jan , feb , march , april, may};
	enum months m, m1;
	m = jan;
	m1 = feb;
	
	printf(" the month is %d \n", m);
	printf("%d",m1);
}