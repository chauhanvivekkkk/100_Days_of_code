/*
    PROBLEM:
    Write a program to take an integer array arr[] of size n as input.
    For each element in the array, find its next greater element (the nearest element to the right that is greater).
    If no such element exists, the next greater element is -1.
    Print the next greater elements in order, comma separated.
    NOTE: Do NOT use a stack — use the brute force (nested loop) approach.
*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i != n - 1) printf(", ");
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY56__Q106.c -o DAY56__Q106 } ; if ($?) { .\DAY56__Q106 }
4
1 2 3 4
2, 3, 4, -1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY56__Q106.c -o DAY56__Q106 } ; if ($?) { .\DAY56__Q106 }
5
6 8 0 1 3
8, -1, 1, 3, -1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY56__Q106.c -o DAY56__Q106 } ; if ($?) { .\DAY56__Q106 }
4
1 2 3 5
2, 3, 5, -1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY56__Q106.c -o DAY56__Q106 } ; if ($?) { .\DAY56__Q106 }
4
5 4 3 1
-1, -1, -1, -1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110>
*/
