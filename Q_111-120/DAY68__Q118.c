/*
    PROBLEM:
    Write a program to take an input array of size n.
    The array contains all integers from 0 to n except one missing number.
    Find and print the missing number.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int expected_sum = n * (n + 1) / 2;  // sum of 0..n
    int actual_sum = 0;

    for (int i = 0; i < n; i++)
        actual_sum += nums[i];

    int missing = expected_sum - actual_sum;

    printf("%d", missing);
    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY68__Q118.c -o DAY68__Q118 } ; if ($?) { .\DAY68__Q118 }
4
0 3 2 4
1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY68__Q118.c -o DAY68__Q118 } ; if ($?) { .\DAY68__Q118 }
3
1 2 3
0
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY68__Q118.c -o DAY68__Q118 } ; if ($?) { .\DAY68__Q118 }
5
0 4 3 1 5
2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120>
*/
