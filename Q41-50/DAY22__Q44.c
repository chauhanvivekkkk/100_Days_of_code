/* 
Write a program to find the sum of the series: 
1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    float numerator = 1.0, denominator = 2.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\" ; if ($?) { gcc tempCodeRunnerFile.c -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
Enter number of terms: 3
Sum of the series up to 3 terms = 2.08
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\" ; if ($?) { gcc tempCodeRunnerFile.c -o tempCodeRunnerFile } ; if ($?) { .\tempCodeRunnerFile }
Enter number of terms: 5
Sum of the series up to 5 terms = 3.86
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code>
*/
