/*
    PROBLEM:
    Write a program to take an integer array arr of size n as input.
    Use Kadane's algorithm to find the maximum sum of any contiguous subarray.
    If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_so_far = arr[0];
    int curr_sum = arr[0];

    for (int i = 1; i < n; i++) {
        // Kadane step: choose the better option
        if (curr_sum + arr[i] < arr[i])
            curr_sum = arr[i];
        else
            curr_sum += arr[i];

        if (curr_sum > max_so_far)
            max_so_far = curr_sum;
    }

    printf("%d", max_so_far);
    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY62__Q112.c -o DAY62__Q112 } ; if ($?) { .\DAY62__Q112 }
7 
2 3 -8 7 -1 2 3
11
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY62__Q112.c -o DAY62__Q112 } ; if ($?) { .\DAY62__Q112 }
2
-2 -4
-2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY62__Q112.c -o DAY62__Q112 } ; if ($?) { .\DAY62__Q112 }
5 
5 4 1 7 8
25
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120>
*/