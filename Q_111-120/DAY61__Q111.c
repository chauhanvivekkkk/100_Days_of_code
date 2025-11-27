/*
    PROBLEM:
    Write a program to take an integer array arr of size n and an integer k as inputs.
    For each contiguous subarray (window) of size k moving left to right, print the first
    negative integer in that window. If a window contains no negative integer, print 0.
    Print results separated by spaces.

    (Assume 1 <= k <= n for valid tests.)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    if (scanf("%d", &k) != 1) {
        free(arr);
        return 0;
    }

    if (k <= 0 || k > n) {
        // invalid k -> no windows to process
        free(arr);
        return 0;
    }

    // deque to store indices of negative numbers (front at head, back at tail-1)
    int *dq = (int*)malloc(sizeof(int) * n);
    int head = 0, tail = 0;

    int printed = 0;
    for (int i = 0; i < n; i++) {
        // remove indices that are out of current window (<= i - k)
        while (head < tail && dq[head] <= i - k) head++;

        // if current element is negative, add its index to deque
        if (arr[i] < 0) dq[tail++] = i;

        // once we have processed at least k elements, output for window ending at i
        if (i >= k - 1) {
            int out;
            if (head < tail) out = arr[dq[head]]; // first negative in window
            else out = 0;

            if (printed > 0) printf(" ");
            printf("%d", out);
            printed++;
        }
    }

    printf("\n");
    free(arr);
    free(dq);
    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY61__Q111.c -o DAY61__Q111 } ; if ($?) { .\DAY61__Q111 }
5
-8 2 3 -6 10
2
-8 0 -6 -6
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY61__Q111.c -o DAY61__Q111 } ; if ($?) { .\DAY61__Q111 }
8
12 -1 -7 8 -15 30 16 28
3
-1 -1 -7 -15 -15 0
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY61__Q111.c -o DAY61__Q111 } ; if ($?) { .\DAY61__Q111 }
4
12 1 3 5
3
0 0
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120>
*/
