/*
   Problem:
   Write a C program to check if a square matrix is symmetric.
   A matrix is symmetric if A[i][j] == A[j][i] for all i, j.
*/

#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    if(isSymmetric)
        printf("True");
    else
        printf("False");

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY38__Q76.c -o DAY38__Q76 } ; if ($?) { .\DAY38__Q76 }
Enter size of square matrix (n x n): 2 2
Enter matrix elements:
1 2
2 1
False
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80\" ; if ($?) { gcc DAY38__Q76.c -o DAY38__Q76 } ; if ($?) { .\DAY38__Q76 }
Enter size of square matrix (n x n): 2 2
Enter matrix elements:
1 0
2 1
False
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q71-80>
*/
