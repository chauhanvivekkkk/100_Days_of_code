/*Write a program to input two numbers and display their sum.*/

#include <stdio.h>

int main() {
    float num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;

    printf("Sum = %.2f\n", sum);

    return 0;
}

// SAMPLE TEST CASES
/*PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc Q1.c -o Q1 } ; if ($?) { .\Q1 }
Enter two numbers: 3 4
Sum = 7.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc Q1.c -o Q1 } ; if ($?) { .\Q1 }
Enter two numbers: -1 20
Sum = 19.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10*/