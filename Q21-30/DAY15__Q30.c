// Question: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;           // Get last digit
        reverse = reverse * 10 + remainder; // Add digit to reversed number
        num = num / 10;                 // Remove last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY15__Q30.c -o DAY15__Q30 } ; if ($?) { .\DAY15__Q30 }
Enter a number: 1234
Reversed number = 4321
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY15__Q30.c -o DAY15__Q30 } ; if ($?) { .\DAY15__Q30 }
Enter a number: 100
Reversed number = 1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30>
*/
