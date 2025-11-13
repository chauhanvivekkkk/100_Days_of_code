/*
   Problem:
   Write a C program to find the sum of all elements 
   in a matrix of size m x n.
*/

#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat[m][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum += mat[i][j];
        }
    }

    printf("Sum of all elements: %d", sum);

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY36__Q72.c -o DAY36__Q72 } ; if ($?) { .\DAY36__Q72 }
Enter number of rows and columns: 3 3
Enter matrix elements:
2 3 0
1 2 3
4 5 6
Sum of all elements: 26
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> 
*/
