#include <stdio.h>
/*
automatic variable: In C, an automatic variable is a local variable that is automatically 
created when a function is called and destroyed when the function exits. It is stored in the 
stack memory and has a default value of garbage. Automatic variables are not initialized by default,
 so they may contain unpredictable values until explicitly assigned.
*/
int main()
{
    int a = 1;
    auto int b = 2; // automatic variable
    printf("the value store in %d\n ", a);
    printf("the value store in %d ", b);
    // auto int c = 3; // this is not needed in main function
}