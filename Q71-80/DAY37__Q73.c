/*
   Problem:
   Write a C program to find the sum of each row of a matrix 
   and store the row sums in a separate array.
*/

#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat[m][n];
    int rowSum[m];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculate row sums
    for(i = 0; i < m; i++) {
        rowSum[i] = 0;
        for(j = 0; j < n; j++) {
            rowSum[i] += mat[i][j];
        }
    }

    printf("Row sums: ");
    for(i = 0; i < m; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY37__Q73.c -o DAY37__Q73 } ; if ($?) { .\DAY37__Q73 }
Enter number of rows and columns: 2 3
Enter matrix elements:
1 2 3 
4 5 6
Row sums: 6 15 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80>
*/
