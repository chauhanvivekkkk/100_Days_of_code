// Question: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%.2f is the largest number.\n", a);
    else if (b >= a && b >= c)
        printf("%.2f is the largest number.\n", b);
    else
        printf("%.2f is the largest number.\n", c);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY8__Q16.c -o DAY8__Q16 } ; if ($?) { .\DAY8__Q16 }
Enter three numbers: 3 7 5
7.00 is the largest number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY8__Q16.c -o DAY8__Q16 } ; if ($?) { .\DAY8__Q16 }
Enter three numbers: -1 -5 0
0.00 is the largest number.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20>      
*/

