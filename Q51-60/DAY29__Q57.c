/* 
Problem: Find the sum of array elements.

*/

#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    printf("Sum = %d\n", sum);
    return 0;
}
/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY29__Q57.c -o DAY29__Q57 } ; if ($?) { .\DAY29__Q57 }
Enter the number of elements: 4
Enter 4 elements:
2 4 6 8
Sum = 20
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY29__Q57.c -o DAY29__Q57 } ; if ($?) { .\DAY29__Q57 }
Enter the number of elements: 3 
Enter 3 elements:
1 1 1
Sum = 3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> 
*/