// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Enter a positive number.\n");
        return 0;
    }

    // Calculate sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY21__Q42.c -o DAY21__Q42 } ; if ($?) { .\DAY21__Q42 }
Enter a number: 6
6 is a perfect number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY21__Q42.c -o DAY21__Q42 } ; if ($?) { .\DAY21__Q42 }
Enter a number: 10
10 is not a perfect number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50>
*/
