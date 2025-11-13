/*
   Problem:
   Write a C program to insert an element into a sorted array
   at the correct position while maintaining the sorted order.
*/

#include <stdio.h>

int main() {
    int n, i, key;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    int pos = n - 1;

    while(pos >= 0 && arr[pos] > key) {
        arr[pos + 1] = arr[pos];
        pos--;
    }

    arr[pos + 1] = key;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY33__Q66.c -o DAY33__Q66 } ; if ($?) { .\DAY33__Q66 }
Enter size of sorted array: 5
Enter sorted array elements: 1 2 4 5 6
Enter element to insert: 3
Array after insertion: 1 2 3 4 5 6 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70>
*/
