//2d array:
// it take two subscripts in declaration and it mean it cantain rows and columns
/*
#include <stdio.h>

int main() {
    int marks[2][3] = { {85, 90, 95}, {75, 80, 70} };

// Using nested for loops to print all marks
    for (int i = 0; i < 2; i++) {           // Loop for students (rows)
        for (int j = 0; j < 3; j++) {       // Loop for subjects (columns)
            printf("Student %d, Subject %d marks: %d\n", i+1, j+1, marks[i][j]);
        }
    }

    return 0;
}
*/

#include <stdio.h>

int main() {
    int marks[2][3] = { {85, 90, 95}, {75, 80, 70} };

    for (int i = 0; i < 2; i++) {           // rows (students)
        for (int j = 0; j < 3; j++) {       // columns (subjects)
            printf("%d\t", marks[i][j]);    // \t for tab space
        }
        printf("\n");  // go to next line after one student
    }

    return 0;
}
