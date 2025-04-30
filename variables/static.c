/*
static variable: In C, the static keyword keeps a variable's value even after the function ends.
Instead of resetting every time, the variable remembers its last value when the function is called again.
It limits the variable's use to only inside the same function or file (no outside access.)
*/

#include <stdio.h>

int calc()
{
    static int sum = 0;
    sum++;
    return sum;

}
void main()
{
    printf(" %d  \n ", calc());
    printf("%d \n ", calc());

}

// output
// 1
// 2