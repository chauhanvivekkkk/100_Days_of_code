// Question: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        isPrime = 0;
    else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY17__Q34.c -o DAY17__Q34 } ; if ($?) { .\DAY17__Q34 }
Enter a number: 7
7 is a prime number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY17__Q34.c -o DAY17__Q34 } ; if ($?) { .\DAY17__Q34 }
Enter a number: 10
10 is not a prime number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40>
*/
