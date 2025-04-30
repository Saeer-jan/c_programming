/*
Logical Operators for Binary Operations
These are operators that operate on two operands. 
For example, the logical AND operator (&&) or the logical OR operator (||) 
are binary operators that operate on two boolean values.
For example, if x is true and y is false, then x && y is false and x || y is true.
Note: Logical operators are used to perform logical operations on boolean values.
For example, the logical AND operator (&&) returns true if both operands are true, and false otherwise.
*/

#include <stdio.h>

int main()
{
    int a, b, c, result, choice = 0;

    while (choice != 4)
    {
        printf("\nMenu:\n");
        printf("Enter 1 for AND\n");
        printf("Enter 2 for OR\n");
        printf("Enter 3 for NOT\n");
        printf("Enter 4 to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            result = (a > b) && (a < c); // logical AND operation
            printf("Result of (a > b) && (a < c): %d\n", result);
            break;

        case 2:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            result = (a > b) || (a < c); // logical OR operation
            printf("Result of (a > b) || (a < c): %d\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = !(a > b); // logical NOT operation
            printf("Result of !(a > b): %d\n", result);
            break;

        case 4:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
