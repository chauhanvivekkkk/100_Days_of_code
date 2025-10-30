// Write a program to find the 1’s complement of a binary number and print it (without using arrays or long).

#include <stdio.h>

int main() {
    int digit;

    printf("Enter a binary number (one digit at a time, end with -1):\n");

    printf("1’s Complement: ");

    while (1) {
        scanf("%d", &digit);
        if (digit == -1) // End of input
            break;
        if (digit != 0 && digit != 1) {
            printf("\nInvalid binary number.\n");
            return 0;
        }
        // Print 1's complement immediately
        printf("%d", (digit == 0) ? 1 : 0);
    }

    printf("\n");
    return 0;
}

/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY20__Q40.c -o DAY20__Q40 } ; if ($?) { .\DAY20__Q40 }
Enter a binary number (one digit at a time, end with -1):
1ΓÇÖs Complement: 1 0 1 0
01011
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY20__Q40.c -o DAY20__Q40 } ; if ($?) { .\DAY20__Q40 }
Enter a binary number (one digit at a time, end with -1):
1ΓÇÖs Complement: 1 1 1 1 
00000
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> 
*/
