/*
pointer to a function:
function :
as function is a set of instructions that perform a certian task and  to generate a output

What is a Pointer to a Function?
A pointer to a function is a pointer that stores the address of a function (just like a normal pointer stores the address of a variable).
You can call the function through the pointer.

In simple words:
Pointer to Function = Shortcut that points to a function and can call it!

*/
#include <stdio.h>

int add(int a, int b) {
    return a + b;}
int	sub(int a , int b){
    	return a -b;
	}

int main() {
    int (*ptr)(int, int);  // function pointer
    ptr  = add;
    printf("%d this is add \n", ptr(3, 4));     // call add through pointer
    
   
    ptr = sub;
    printf("the difference is %d\n",ptr(4,2));
    return 0;
}



