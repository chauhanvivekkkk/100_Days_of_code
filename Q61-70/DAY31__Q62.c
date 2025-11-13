/*
   Problem:
   Write a C program to reverse an array without taking 
   any extra space (in-place reversal).
*/

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0, end = n - 1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY31__Q62.c -o DAY31__Q62 } ; if ($?) { .\DAY31__Q62 }
4
1 2 3 4
4 3 2 1 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> 
*/