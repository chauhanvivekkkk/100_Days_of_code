/*
   Problem:
   Write a C program to multiply two matrices.
*/

#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);

    int A[m1][n1];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);

    if(n1 != m2) {
        printf("Matrix multiplication not possible.");
        return 0;
    }

    int B[m2][n2], C[m1][n2];

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < m2; i++) {
        for(j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            for(k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY40__Q80.c -o DAY40__Q80 } ; if ($?) { .\DAY40__Q80 }
Enter rows and columns of first matrix: 2 3
Enter elements of first matrix:
1 2 3
4 5 6
Enter rows and columns of second matrix: 3 2
Enter elements of second matrix:
7 8
9 10
11 12
Resultant matrix after multiplication:
58 64
139 154
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80>
*/
