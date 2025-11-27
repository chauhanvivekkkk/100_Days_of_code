/*
    PROBLEM:
    Write a Program to take an integer array nums of size n.
    Print an array answer such that answer[i] is the product of all elements 
    of nums except nums[i].

    NOTE:
    - Do NOT use division.
    - The product is guaranteed to fit in a 32-bit integer.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[n];

    // Step 1: prefix product
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: suffix product and final result
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print result in array format
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) printf(",");
    }
    printf("]");

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY58__Q108.c -o DAY58__Q108 } ; if ($?) { .\DAY58__Q108 }
4
1 2 3 4
[24,12,8,6]
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY58__Q108.c -o DAY58__Q108 } ; if ($?) { .\DAY58__Q108 }
5
-1 1 0 -3 3
[0,0,9,0,0]
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> 
*/
