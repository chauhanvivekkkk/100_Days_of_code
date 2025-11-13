/*
   Problem:
   Write a C program to find the transpose of a matrix 
   of size m x n. The transpose of a matrix flips rows 
   into columns.
*/

#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat[m][n], trans[n][m];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Compute transpose
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY37__Q74.c -o DAY37__Q74 } ; if ($?) { .\DAY37__Q74 }
Enter number of rows and columns: 2 3
Enter matrix elements:
1 2 3
4 5 6
Transpose of matrix:
1 4
2 5
3 6
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80>
*/
