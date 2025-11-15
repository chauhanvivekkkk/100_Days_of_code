/*
    PROBLEM:
    Write a program to take an integer array arr of size n and an integer k as inputs.
    For each contiguous subarray (window) of size k moving left to right, print the maximum element.
    Print the maximums separated by spaces.
    (Assume 1 <= k <= n in valid tests.)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int k;
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        // invalid k for given array; nothing to print
        free(arr);
        return 0;
    }

    // deque will store indices of array elements; front at dq_head, back at dq_tail-1
    int *dq = (int*)malloc(sizeof(int) * n);
    int dq_head = 0, dq_tail = 0; // empty when head == tail

    int windows = n - k + 1;
    int printed = 0;

    for (int i = 0; i < n; i++) {
        // remove indices out of current window (i - k)
        if (dq_head < dq_tail && dq[dq_head] <= i - k) dq_head++;

        // remove from back while current element is greater than or equal to arr[dq[tail-1]]
        while (dq_head < dq_tail && arr[dq[dq_tail - 1]] <= arr[i]) dq_tail--;

        // push current index
        dq[dq_tail++] = i;

        // when we've processed at least k elements, front of deque is max for window ending at i
        if (i >= k - 1) {
            int maxVal = arr[dq[dq_head]];
            // print with space separation; avoid trailing space by checking printed count
            if (printed > 0) printf(" ");
            printf("%d", maxVal);
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
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY60__Q110.c -o DAY60__Q110 } ; if ($?) { .\DAY60__Q110 }
9
1 2 3 1 4 5 2 3 6
3
3 3 4 5 5 5 6
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY60__Q110.c -o DAY60__Q110 } ; if ($?) { .\DAY60__Q110 }
5
5 1 3 4 2
1
5 1 3 4 2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> 
*/
