/*
   Problem:
   Write a C program to check whether all the elements on the 
   main diagonal of a matrix are distinct (no duplicates).
*/

#include <stdio.h>

int main() {
    int m, n, i, j, flag = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    if(m != n) {
        printf("False");  // Diagonal distinctness only meaningful for square matrices
        return 0;
    }

    int mat[m][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check distinct diagonal elements
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(mat[i][i] == mat[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag)
        printf("True");
    else
        printf("False");

    return 0;
}

/*
SAMPLE TEST CASES:
S C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY39__Q77.c -o DAY39__Q77 } ; if ($?) { .\DAY39__Q77 }
Enter number of rows and columns: 3 3
Enter matrix elements:
1 2 3
4 5 6
7 8 1
False
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY39__Q77.c -o DAY39__Q77 } ; if ($?) { .\DAY39__Q77 }
Enter number of rows and columns: 3 3
Enter matrix elements:
1 2 3
4 5 6
7 8 9
True
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80>
*/
