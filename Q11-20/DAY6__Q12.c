// Question: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0)
            printf("The number is Zero.\n");
        else
            printf("The number is Positive.\n");
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY6__Q12.c -o DAY6__Q12 } ; if ($?) { .\DAY6__Q12 }
Enter an integer: -5
The number is Negative.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY6__Q12.c -o DAY6__Q12 } ; if ($?) { .\DAY6__Q12 }
Enter an integer: 0
The number is Zero.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY6__Q12.c -o DAY6__Q12 } ; if ($?) { .\DAY6__Q12 }
Enter an integer: 10
The number is Positive.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20>
*/
