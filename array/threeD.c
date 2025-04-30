//3d array:'



#include <stdio.h>

int main() {
    int arr[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },
        { {7, 8, 9}, {10, 11, 12} }
    };

    for (int i = 0; i < 2; i++) {      // Table level
        printf("Table %d:\n", i);
        for (int j = 0; j < 2; j++) {  // Row level
            for (int k = 0; k < 3; k++) { // Column level
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n"); // new line after each table
    }

    return 0;
}
