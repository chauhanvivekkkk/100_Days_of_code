/*
   Problem:
   Write a C program to find the sum of the main diagonal 
   elements of a square matrix.
*/

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter number of rows and columns (square matrix): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += mat[i][i];   // main diagonal element
    }

    printf("Sum of main diagonal elements: %d", sum);

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY39__Q78.c -o DAY39__Q78 } ; if ($?) { .\DAY39__Q78 }
Enter number of rows and columns (square matrix): 3 3
Enter matrix elements:
1 2 3
4 5 6
7 8 9
Sum of main diagonal elements: 15
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80>
*/
