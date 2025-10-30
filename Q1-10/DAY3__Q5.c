// Question: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY3__Q5.c -o DAY3__Q5 } ; if ($?) { .\DAY3__Q5 }
Enter temperature in Celsius: 0
Temperature in Fahrenheit = 32.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY3__Q5.c -o DAY3__Q5 } ; if ($?) { .\DAY3__Q5 }
Enter temperature in Celsius: 100
Temperature in Fahrenheit = 212.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10>
*/
