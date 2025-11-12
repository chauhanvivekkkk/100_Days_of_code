/* 
Problem: Write a program to read and print elements of a one-dimensional array.
*/

#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element
    }

    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element
    }

    printf("\n");
    return 0;
}
// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY28__Q56.c -o DAY28__Q56 } ; if ($?) { .\DAY28__Q56 }
Enter the number of elements: 3
Enter 3 elements:
10 20 30
The elements of the array are:
10 20 30 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY28__Q56.c -o DAY28__Q56 } ; if ($?) { .\DAY28__Q56 }
Enter the number of elements: 5
Enter 5 elements:
1 2 3 4 5 
The elements of the array are:
1 2 3 4 5 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> 
*/