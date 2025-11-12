/* 
Problem: Find the maximum and minimum element in an array.
*/

#include <stdio.h>

int main(void) {
    int n, i, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0]; // Initialize both with first element

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max=%d, Min=%d\n", max, min);
    return 0;
}
/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY29__Q58.c -o DAY29__Q58 } ; if ($?) { .\DAY29__Q58 }
Enter the number of elements: 5
Enter 5 elements:
2 9 1 4 7
Max=9, Min=1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY29__Q58.c -o DAY29__Q58 } ; if ($?) { .\DAY29__Q58 }
Enter the number of elements: 3
Enter 3 elements:
10 10 10
Max=10, Min=10
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60>
*/