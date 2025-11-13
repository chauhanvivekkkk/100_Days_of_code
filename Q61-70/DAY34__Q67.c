/*
   Problem:
   Write a C program to insert an element into an array 
   at a given position (0-based index). Shift elements to the right.
*/

#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &value);

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY34__Q67.c -o DAY34__Q67 } ; if ($?) { .\DAY34__Q67 }
Enter size of array: 4
Enter array elements: 10 20 30 40
Enter position and value to insert: 2
15
Array after insertion: 10 20 15 30 40 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> 

*/
