/* 
Q59 (Arrays (1D))
Problem: Count even and odd numbers in an array.

Example Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Example Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/

#include <stdio.h>

int main(void) {
    int n, i, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY30__Q59.c -o DAY30__Q59 } ; if ($?) { .\DAY30__Q59 }
Enter the number of elements: 6
Enter 6 elements:
1 2 3 4 5 6
Even=3, Odd=3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY30__Q59.c -o DAY30__Q59 } ; if ($?) { .\DAY30__Q59 }
Enter the number of elements: 4
Enter 4 elements:
2 4 6 8 
Even=4, Odd=0
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> 
*/