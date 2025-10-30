// Question: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;          // Extract last digit
        if (digit % 2 != 0) {      // Check if odd
            product *= digit;      // Multiply odd digits
            hasOdd = 1;            // Mark that we found at least one odd digit
        }
        num = num / 10;            // Remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY20__Q39.c -o DAY20__Q39 } ; if ($?) { .\DAY20__Q39 }
Enter a number: 12345
Product of odd digits = 15
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY20__Q39.c -o DAY20__Q39 } ; if ($?) { .\DAY20__Q39 }
Enter a number: 2468
No odd digits found.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40>
*/
