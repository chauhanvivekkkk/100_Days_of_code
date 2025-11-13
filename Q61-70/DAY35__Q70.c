/*
   Problem:
   Write a C program to rotate an array to the right by k positions.
   Right rotation means the last k elements move to the front.
*/

#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate right): ");
    scanf("%d", &k);

    k = k % n;  // to handle k > n

    int temp[n];

    // Move last k elements to the start
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift first n-k elements
    for(i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    printf("Array after right rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY35__Q70.c -o DAY35__Q70 } ; if ($?) { .\DAY35__Q70 }
Enter size of array: 5
Enter array elements: 1 2 3 4 5 
Enter k (number of positions to rotate right): 2
Array after right rotation: 4 5 1 2 3 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70>
*/
