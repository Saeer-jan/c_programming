/*
Data Types in C Language
A data type is a classification that tells the compiler or interpreter how the programmer
intends to use the data. C programming provides various data types such as char, int, float, 
double, and void.
*/

// Example:
#include <stdio.h>
int main() {
    int age = 20;
    float salary = 50000.5;
    char grade = 'A';
    return 0;
}

/*
Classification of Data Types

Basic Data Types – These include int, char, float, and double.

Derived Data Types – These include array, pointer, structure, union, and function.
*/

// Example:
#include <stdio.h>
int main() {
    int number = 10;         // basic type
    int numbers[5];          // derived type (array)
    return 0;
}

/*
Memory Sizes of Basic Types

int occupies 4 bytes

char occupies 1 byte

float occupies 4 bytes

double occupies 8 bytes
*/

// Example:
#include <stdio.h>
int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    return 0;
}

/*
Modifiers
Modifiers alter the meaning of the basic data types to fit specific needs. Examples include:

signed int, unsigned int

signed char, unsigned char

signed float, unsigned float (Note: unsigned float and unsigned double are not standard in C)

signed double, unsigned double
*/

// Example:
#include <stdio.h>
int main() {
    unsigned int positiveNumber = 300;
    signed int anyNumber = -150;
    printf("%u\n", positiveNumber);
    printf("%d\n", anyNumber);
    return 0;
}

/*
Variables in C
A variable is a user-defined name that refers to a memory location used to store data. Example syntax 
for declaring variables:
*/

// Example:
#include <stdio.h>
int main() {
    int a = 1, b = 2, c;
    c = a + b;
    printf("%d\n", c);
    return 0;
}

/*
Types of Variables

Local Variable – Declared inside a function or block and accessible only within that block.
(More types like global, static, and external can be added later.)
*/

// Example:
#include <stdio.h>
void myFunction() {
    int localVar = 5; // local variable
    printf("%d\n", localVar);
}
int main() {
    myFunction();
    return 0;
}

/*
Additional Concepts (To be explored more)

Array – Collection of similar data items.

Structure – Collection of variables of different types.

Union – Similar to structure but shares memory.

Function – A block of code designed to perform a specific task.
*/

// Array Example:
#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    printf("%d\n", arr[0]);
    return 0;
}

// Structure Example:
#include <stdio.h>
struct Student {
    int id;
    char name[20];
};
int main() {
    struct Student s1 = {1, "Ali"};
    printf("%d %s\n", s1.id, s1.name);
    return 0;
}

// Union Example:
#include <stdio.h>
union Data {
    int i;
    float f;
};
int main() {
    union Data data;
    data.i = 10;
    printf("%d\n", data.i);
    return 0;
}

// Function Example:
#include <stdio.h>
void greet() {
    printf("Hello, World!\n");
}
int main() {
    greet();
    return 0;
}
