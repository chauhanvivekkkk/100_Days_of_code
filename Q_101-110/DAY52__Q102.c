/*
    PROBLEM:
    Write a Program to take a sorted array arr[] and an integer x as input.
    Find the index (0-based) of the smallest element in arr[] that is
    greater than or equal to x (the ceil of x) and print it.
    If such an element does not exist, print -1.
    If multiple occurrences exist, return the first occurrence.
*/

#include <stdio.h>

int main() {
    int n, x, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int index = -1;
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY52__Q102.c -o DAY52__Q102 } ; if ($?) { .\DAY52__Q102 }
7 
1 2 8 10 11 12 19
5
2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY52__Q102.c -o DAY52__Q102 } ; if ($?) { .\DAY52__Q102 }
7
1 2 8 10 11 12 19
20
-1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY52__Q102.c -o DAY52__Q102 } ; if ($?) { .\DAY52__Q102 }
8
1 1 2 8 10 11 12 19
0
0
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY52__Q102.c -o DAY52__Q102 } ; if ($?) { .\DAY52__Q102 }
8
1 1 2 8 10 11 12 19
2
2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110>
*/
