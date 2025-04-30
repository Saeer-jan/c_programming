#include <stdio.h>
/// @brief 
/// @return 
int main()
{
    int a = 1, b=2, c ;
    c = a + b;
    printf("the sum of %d and %d is %d \n ", a, b , c);
    c = a - b;
    printf("the difference of %d and %d is %d \n ", a, b , c);
    c = a * b;
    printf("the product of %d and %d is %d \n ", a, b , c);
    c = a / b;
    printf("the division of %d and %d is %d \n ", a, b , c);
    return 0;
    // return 0; // this is not needed in main function
}