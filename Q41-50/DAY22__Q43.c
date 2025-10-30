// Write a program to check if a number is a strong number.

#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Enter a positive number.\n");
        return 0;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY22__Q43.c -o DAY22__Q43 } ; if ($?) { .\DAY22__Q43 }
Enter a number: 145
145 is a strong number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY22__Q43.c -o DAY22__Q43 } ; if ($?) { .\DAY22__Q43 }
Enter a number: 123
123 is not a strong number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50>
*/
