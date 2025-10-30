// Question: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// SAMPLE TEST CASES:
/*PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY4__Q7.c -o DAY4__Q7 } ; if ($?) { .\DAY4__Q7 }
Enter two numbers: 10 20 
Before swapping: a = 10, b = 20
After swapping: a = 20, b = 10
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY4__Q7.c -o DAY4__Q7 } ; if ($?) { .\DAY4__Q7 }
Enter two numbers: 7 14
Before swapping: a = 7, b = 14
After swapping: a = 14, b = 7
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> 
*/
