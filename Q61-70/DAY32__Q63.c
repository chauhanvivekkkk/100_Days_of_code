/*
   Problem:
   Write a C program to merge two arrays into a single array.
*/

#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first array: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second array: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for(j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY32__Q63.c -o DAY32__Q63 } ; if ($?) { .\DAY32__Q63 }
Enter size of first array: 3
Enter elements of first array: 1 2 3 
Enter size of second array: 2
Enter elements of second array: 4 5
Merged array: 1 2 3 4 5 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> 
*/