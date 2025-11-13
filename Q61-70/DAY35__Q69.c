/*
   Problem:
   Write a C program to find the second largest element 
   in an array. Assume all elements are distinct.
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = -1e9, max2 = -1e9;

    for(i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } 
        else if(arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    printf("Second largest element: %d", max2);

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY35__Q69.c -o DAY35__Q69 } ; if ($?) { .\DAY35__Q69 }
Enter size of array: 5
Enter array elements: 10 20 30 40 50
Second largest element: 40
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70>
*/
