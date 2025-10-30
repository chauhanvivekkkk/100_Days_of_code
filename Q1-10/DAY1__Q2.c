// Question: Write a program to input two numbers (float) and display their sum.


#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Sum = %.2f\n", num1 + num2);
    printf("Difference = %.2f\n", num1 - num2);
    printf("Product = %.2f\n", num1 * num2);

    if (num2 == 0)
        printf("Quotient = Undefined (division by zero not allowed)\n");
    else
        printf("Quotient = %.2f\n", num1 / num2);

    return 0;
}

// SAMPLE TEST CASES
/*PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc Q2.c -o Q2 } ; if ($?) { .\Q2 }
Enter two numbers: 10 2
Sum = 12.00
Difference = 8.00
Product = 20.00
Quotient = 5.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc Q2.c -o Q2 } ; if ($?) { .\Q2 }
Enter two numbers: 7 3
Sum = 10.00
Difference = 4.00
Product = 21.00
Quotient = 2.33
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc Q2.c -o Q2 } ; if ($?) { .\Q2 }
Enter two numbers: 3 0
Sum = 3.00
Difference = 3.00
Product = 0.00
Quotient = Undefined (division by zero not allowed)
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10>*/