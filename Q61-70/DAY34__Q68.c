/*
   Problem:
   Write a C program to delete an element from an array 
   at a given position (0-based index). Shift elements left.
*/

#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion: ");
    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY34__Q68.c -o DAY34__Q68 } ; if ($?) { .\DAY34__Q68 }
Enter size of array: 5
Enter array elements: 1 2 3 4 5
Enter position to delete: 2
Array after deletion: 1 2 4 5 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> 
*/
