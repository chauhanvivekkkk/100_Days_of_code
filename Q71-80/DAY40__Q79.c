/*
   Problem:
   Write a C program to perform diagonal traversal of a 
   matrix in zig-zag order (up-right, then down-left).
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

    printf("Diagonal Traversal: ");

    // Total diagonals = m + n - 1
    for(int d = 0; d < m + n - 1; d++) {

        if (d % 2 == 0) {
            // even diagonal → move up-right
            int r = (d < m) ? d : m - 1;
            int c = d - r;

            while (r >= 0 && c < n) {
                printf("%d ", mat[r][c]);
                r--;
                c++;
            }

        } else {
            // odd diagonal → move down-left
            int c = (d < n) ? d : n - 1;
            int r = d - c;

            while (c >= 0 && r < m) {
                printf("%d ", mat[r][c]);
                r++;
                c--;
            }
        }
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY40__Q79.c -o DAY40__Q79 } ; if ($?) { .\DAY40__Q79 }
Enter number of rows and columns: 3 3
Enter matrix elements:
1 2 3    
4 5 6
7 8 9
Diagonal Traversal: 1 2 4 7 5 3 6 8 9 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> 

*/
