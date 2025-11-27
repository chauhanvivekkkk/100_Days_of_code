/*
    PROBLEM:
    Write a program to take two sorted arrays of size m and n as input.
    Merge both arrays so that the final merged array is also sorted.
    Print the merged array (space-separated).
*/

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);

    int nums1[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    scanf("%d", &n);

    int nums2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    // Copy remaining elements
    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];

    // Print result
    for (int x = 0; x < m + n; x++) {
        printf("%d", merged[x]);
        if (x != m + n - 1) printf(" ");
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY67__Q117.c -o DAY67__Q117 } ; if ($?) { .\DAY67__Q117 }
4
2 7 11 15
3
4 8 10
2 4 7 8 10 11 15
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY67__Q117.c -o DAY67__Q117 } ; if ($?) { .\DAY67__Q117 }
3
1 2 7
3
9 10 17
1 2 7 9 10 17
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY67__Q117.c -o DAY67__Q117 } ; if ($?) { .\DAY67__Q117 }
3
-10 -2 7
3
-3 -1 7
-10 -3 -2 -1 7 7
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120>
*/
