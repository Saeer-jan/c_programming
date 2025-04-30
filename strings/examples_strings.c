//examples of strings


//1. find length
/*
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Saeer";
    printf("Length = %lu", strlen(name));
    return 0;
}
*

//2. copy strings

#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";
    char b[10];
    strcpy(b, a);
    printf("Copied String: %s", b);
    return 0;
}
*
//3.compare strings

#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";
    char b[] = "World";
    int result = strcmp(a, b);
    if(result == 0)
        printf("Strings are equal");
    else
        printf("Strings are different");
    return 0;
}
*/

//4. canatinate strings
#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "Good ";
    char b[] = "Morning";
    strcat(a, b);
    printf("Joined String: %s", a);
    return 0;
}
