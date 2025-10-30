// Question: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    while (num != 0) {
        remainder = num % 10;                // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num = num / 10;                      // Remove the last digit
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY16__Q32.c -o DAY16__Q32 } ; if ($?) { .\DAY16__Q32 }
Enter a number: 121
121 is a palindrome.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY16__Q32.c -o DAY16__Q32 } ; if ($?) { .\DAY16__Q32 }
Enter a number: 123
123 is not a palindrome.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40>
*/
