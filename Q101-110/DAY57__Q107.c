/*
    PROBLEM:
    Write a program to take an integer array arr[] of size n as input.
    For each element in the array, find its previous greater element (the nearest element to the left that is greater).
    If no such element exists, the previous greater element is -1.
    Print the previous greater elements in order, comma separated.
    NOTE: Do NOT use a stack — use the brute force (nested loop) approach.
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if (i != n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY57__Q107.c -o DAY57__Q107 } ; if ($?) { .\DAY57__Q107 }
4 
1 3 2 4
-1, -1, 3, -1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY57__Q107.c -o DAY57__Q107 } ; if ($?) { .\DAY57__Q107 }
5
6 8 0 1 3
-1, -1, 8, 8, 8
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY57__Q107.c -o DAY57__Q107 } ; if ($?) { .\DAY57__Q107 }
4  
1 2 3 5
-1, -1, -1, -1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY57__Q107.c -o DAY57__Q107 } ; if ($?) { .\DAY57__Q107 }
4
5 4 3 1
-1, 5, 4, 3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110>
*/
