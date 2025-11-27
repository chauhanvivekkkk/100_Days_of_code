/*
    PROBLEM:
    Write a program to take an integer array arr of size n and an integer k as inputs.
    Print the maximum sum of all subarrays of size k.
    (Assume 1 <= k <= n.)
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    if (k > n || k <= 0) {
        // invalid k for given array, print 0 (or you can handle as needed)
        printf("0");
        return 0;
    }

    long long window_sum = 0;
    for (int i = 0; i < k; i++) window_sum += arr[i];

    long long max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i];
        window_sum -= arr[i - k];
        if (window_sum > max_sum) max_sum = window_sum;
    }

    printf("%lld", max_sum);
    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY59__Q109.c -o DAY59__Q109 } ; if ($?) { .\DAY59__Q109 }
4
100 200 300 400
2
700
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY59__Q109.c -o DAY59__Q109 } ; if ($?) { .\DAY59__Q109 }
9 
1 4 2 10 23 3 1 0 20
4
39
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY59__Q109.c -o DAY59__Q109 } ; if ($?) { .\DAY59__Q109 }
4
100 200 300 400
1
400
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110>
*/
