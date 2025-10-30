// Question: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Compound Interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY5__Q9.c -o DAY5__Q9 } ; if ($?) { .\DAY5__Q9 }
Enter principal amount: 1000
Enter rate of interest: 5
Enter time (in years): 2
Simple Interest = 100.00
Compound Interest = 102.50
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY5__Q9.c -o DAY5__Q9 } ; if ($?) { .\DAY5__Q9 }
Enter principal amount: 5000 
Enter rate of interest: 7
Enter time (in years): 3
Simple Interest = 1050.00
Compound Interest = 1125.21
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10>
*/
