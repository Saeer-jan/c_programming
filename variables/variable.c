/*Variables in C
A variable is a user-defined name that refers to a memory location used to store data. Example syntax 
for declaring variables:
*/
//local variable
#include <stdio.h>
/*void main()
{
    int a = 1;
    printf("the value store in %d ", a);
}*/


//global variable: out side the function is used in all program 
float pi = 3.14;
int circle()
{
    int r = 5;
    double area;
    area = pi *r*r;
    return area;
}
int main()
{
    printf("the area of circle is %d",circle());
}

