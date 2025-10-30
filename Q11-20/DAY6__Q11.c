// Question: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY6__Q11.c -o DAY6__Q11 } ; if ($?) { .\DAY6__Q11 }
Enter an integer: 7
7 is Odd
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY6__Q11.c -o DAY6__Q11 } ; if ($?) { .\DAY6__Q11 }
Enter an integer: 12
12 is Even
*/
