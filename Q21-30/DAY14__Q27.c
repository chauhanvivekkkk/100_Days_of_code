// Question: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); // i-th odd number
    }

    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}

// SAMPPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY14__Q27.c -o DAY14__Q27 } ; if ($?) { .\DAY14__Q27 }
Enter the value of n: 3
Sum of the first 3 odd numbers = 9
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY14__Q27.c -o DAY14__Q27 } ; if ($?) { .\DAY14__Q27 }
Enter the value of n: 5
Sum of the first 5 odd numbers = 25
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> 

*/
