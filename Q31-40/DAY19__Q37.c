// Question: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2; 

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        max++;
    }

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY19__Q37.c -o DAY19__Q37 } ; if ($?) { .\DAY19__Q37 }
Enter two numbers: 4 5
LCM of 4 and 5 is 20
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY19__Q37.c -o DAY19__Q37 } ; if ($?) { .\DAY19__Q37 }
Enter two numbers: 7 3
LCM of 7 and 3 is 21
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40>
*/