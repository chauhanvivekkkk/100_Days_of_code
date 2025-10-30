// Question: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  // Extract last digit
        sum += digit;      // Add it to sum
        num = num / 10;    // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY19__Q38.c -o DAY19__Q38 } ; if ($?) { .\DAY19__Q38 }
Enter a number: 123
Sum of digits = 6
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY19__Q38.c -o DAY19__Q38 } ; if ($?) { .\DAY19__Q38 }
Enter a number: 999
Sum of digits = 27
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> 
*/
