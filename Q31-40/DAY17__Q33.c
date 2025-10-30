// Question: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    while (num != 0) {
        remainder = num % 10;                  // Get last digit
        result += remainder * remainder * remainder; // Cube and add to result
        num /= 10;                             // Remove last digit
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY17__Q33.c -o DAY17__Q33 } ; if ($?) { .\DAY17__Q33 }
Enter a number: 153
153 is an Armstrong number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY17__Q33.c -o DAY17__Q33 } ; if ($?) { .\DAY17__Q33 }
Enter a number: 123
123 is not an Armstrong number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40>
*/