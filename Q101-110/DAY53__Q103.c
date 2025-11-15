/*
    PROBLEM:
    Write a Program to take an array of integers as input and find the pivot index.
    The pivot index is the index where the sum of elements strictly to the left 
    equals the sum of elements strictly to the right.
    If multiple pivot indices exist, print the leftmost.
    If no pivot index exists, print -1.
*/

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int nums[n];
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int totalSum = 0;
    for (i = 0; i < n; i++)
        totalSum += nums[i];

    int leftSum = 0;
    int pivot = -1;

    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            pivot = i;
            break;
        }

        leftSum += nums[i];
    }

    printf("%d", pivot);

    return 0;
}

/*
SAMPLE TEST CASES:
 PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY53__Q103.c -o DAY53__Q103 } ; if ($?) { .\DAY53__Q103 }
6
1 7 3 6 5 6
3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY53__Q103.c -o DAY53__Q103 } ; if ($?) { .\DAY53__Q103 }
3
1 2 3
-1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY53__Q103.c -o DAY53__Q103 } ; if ($?) { .\DAY53__Q103 }
4
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY53__Q103.c -o DAY53__Q103 } ; if ($?) { .\DAY53__Q103 }
3   
2 1 -1
0
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> 
*/
