/*
    PROBLEM:
    Write a program to take an integer array arr and an integer k as inputs.
    Find the kth smallest element in the array and print it.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int k;
    scanf("%d", &k);

    // Simple selection sort approach (sufficient for this task)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d", arr[k - 1]);
    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY63__Q113.c -o DAY63__Q113 } ; if ($?) { .\DAY63__Q113 }
10
10 5 4 3 48 6 2 33 53 10
4
5
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY63__Q113.c -o DAY63__Q113 } ; if ($?) { .\DAY63__Q113 }
6
7 10 4 3 20 15
3
7
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> 
*/
