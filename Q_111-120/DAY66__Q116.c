/*
    PROBLEM:
    Write a program to take an integer array nums (positive integers only) and an integer target.
    Find two distinct indices i and j such that nums[i] + nums[j] = target.
    Print i and j separated by a space.
    If no such pair exists, print "-1 -1".
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int target;
    scanf("%d", &target);

    int found_i = -1, found_j = -1;

    // Brute force approach
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                found_i = i;
                found_j = j;
                printf("%d %d", found_i, found_j);
                return 0;
            }
        }
    }

    // If no pair found
    printf("-1 -1");
    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY66__Q116.c -o DAY66__Q116 } ; if ($?) { .\DAY66__Q116 }
4
2 7 11 15
9
0 1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY66__Q116.c -o DAY66__Q116 } ; if ($?) { .\DAY66__Q116 }
3 
3 2 4
6
1 2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY66__Q116.c -o DAY66__Q116 } ; if ($?) { .\DAY66__Q116 }
2
3 3 
6
0 1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120>
*/
