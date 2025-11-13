/*
   Problem:
   Write a C program to read a matrix of size m x n and 
   print it in matrix form.
*/

#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat[m][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY36__Q71.c -o DAY36__Q71 } ; if ($?) { .\DAY36__Q71 }
Enter number of rows and columns: 3 2
Enter matrix elements:
2 2
1 2
3 4
Matrix:
2 2
1 2
3 4
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80>
*/
