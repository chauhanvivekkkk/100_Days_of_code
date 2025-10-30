// Question: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY18__Q36.c -o DAY18__Q36 } ; if ($?) { .\DAY18__Q36 }
Enter two numbers: 12 18
HCF (GCD) of 12 and 18 is 6
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY18__Q36.c -o DAY18__Q36 } ; if ($?) { .\DAY18__Q36 }
Enter two numbers: 7 9
HCF (GCD) of 7 and 9 is 1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> 

*/
