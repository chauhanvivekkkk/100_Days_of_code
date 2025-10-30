// Question: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY3__Q6.c -o DAY3__Q6 } ; if ($?) { .\DAY3__Q6 }
Enter two numbers: 3 5
After swapping: a = 5, b = 3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY3__Q6.c -o DAY3__Q6 } ; if ($?) { .\DAY3__Q6 }
Enter two numbers: -1 1
After swapping: a = 1, b = -1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> 
*/
