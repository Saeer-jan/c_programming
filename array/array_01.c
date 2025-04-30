/*
array:
Arrays are used to store many values of the same type (like int, float, char) in one place.
Instead of making 5 different variables, you make one array to hold 5 values!
#include <stdio.h>





*/

#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};  // array of 5 integers
    printf("%d", numbers[2]);  // prints 30 (because array starts from 0)
    return 0;
}

