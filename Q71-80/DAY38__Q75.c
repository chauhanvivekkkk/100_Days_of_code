/*
   Problem:
   Write a C program to add two matrices of the same size.
   The result matrix contains the sum of corresponding elements.
*/

#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j;

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

    // Check if addition possible
    if(m1 != m2 || n1 != n2) {
        printf("Matrix addition not possible.");
        return 0;
    }

    int B[m2][n2], C[m1][n1];

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < m2; i++) {
        for(j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix addition
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY38__Q75.c -o DAY38__Q75 } ; if ($?) { .\DAY38__Q75 }
Enter rows and columns of first matrix: 2 2
Enter elements of first matrix:
1 2
3 4
Enter rows and columns of second matrix: 2 2
Enter elements of second matrix:
5 6
7 8
Resultant matrix after addition:
6 8
10 12
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80>
*/
