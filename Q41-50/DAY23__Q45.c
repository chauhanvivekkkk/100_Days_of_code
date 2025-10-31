/* 
Write a program to find the sum of the series: 
2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    float numerator = 2.0, denominator = 3.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY23__Q45.c -o DAY23__Q45 } ; if ($?) { .\DAY23__Q45 }
Enter number of terms: 3
Sum of the series up to 3 terms = 1.78
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY23__Q45.c -o DAY23__Q45 } ; if ($?) { .\DAY23__Q45 }
Enter number of terms: 5
Sum of the series up to 5 terms = 2.84
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50> 
*/
