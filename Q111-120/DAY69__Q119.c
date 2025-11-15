/*
    PROBLEM:
    Write a program to take an integer array as input.
    Exactly one element is repeated.
    Print the repeated element.
    Try to find the result in ONE single iteration.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Use a visited array (size n or bigger depending on input values).
    // Since only ONE pass is allowed, check and mark in the same loop.
    int seen[100000] = {0}; // works for typical constraints

    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY69__Q119.c -o DAY69__Q119 } ; if ($?) { .\DAY69__Q119 }
4
1 3 3 4
3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY69__Q119.c -o DAY69__Q119 } ; if ($?) { .\DAY69__Q119 }
3
1 2 2
2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY69__Q119.c -o DAY69__Q119 } ; if ($?) { .\DAY69__Q119 }
5
0 4 1 1 5
1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120>
*/
