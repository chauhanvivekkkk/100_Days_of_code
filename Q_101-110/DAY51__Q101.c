/*
    PROBLEM:
    Write a Program to take a sorted array (nums[]) and an integer (target) as inputs.
    The elements in the sorted array may be repeated.
    Print the first and last occurrence index of the target.
    If the target is not present, print -1, -1.
*/

#include <stdio.h>

int main() {
    int n, target, i;
    scanf("%d", &n);

    int nums[n];
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &target);

    int first = -1, last = -1;

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY51__Q101.c -o DAY51__Q101 } ; if ($?) { .\DAY51__Q101 }
6
5 7 7 8 8 10
8
3,4
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY51__Q101.c -o DAY51__Q101 } ; if ($?) { .\DAY51__Q101 }
6
5 7 7 8 8 10
6
-1,-1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY51__Q101.c -o DAY51__Q101 } ; if ($?) { .\DAY51__Q101 }
6
5 7 7 8 8 10
10
5,5
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110>
*/
