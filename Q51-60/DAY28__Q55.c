/* 
Problem: Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>

int main(void) {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {        // Start from 2 (first prime number)
        isPrime = 1;                  // Assume number is prime

        for (j = 2; j * j <= i; j++) { // Check divisibility up to sqrt(i)
            if (i % j == 0) {          // If divisible, not a prime
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {                 // If still prime, print it
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY28__Q55.c -o DAY28__Q55 } ; if ($?) { .\DAY28__Q55 }
Enter the value of n: 10
Prime numbers from 1 to 10 are:
2 3 5 7 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY28__Q55.c -o DAY28__Q55 } ; if ($?) { .\DAY28__Q55 }
Enter the value of n: 20
Prime numbers from 1 to 20 are:
2 3 5 7 11 13 17 19 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> 
*/