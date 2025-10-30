// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, digits = 0, temp, place;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10) {
        printf("Swapped number: %d\n", num); // Single-digit number remains the same
        return 0;
    }

    temp = num;
    last = temp % 10; // Last digit

    // Count digits and find first digit
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp; // First digit

    place = 1;
    for (int i = 0; i < digits; i++)
        place *= 10;

    // Swap first and last digits
    int swapped = last * place + (num % place - last) + first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY21__Q41.c -o DAY21__Q41 } ; if ($?) { .\DAY21__Q41 }
Enter a number: 1234
Swapped number: 4231
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY21__Q41.c -o DAY21__Q41 } ; if ($?) { .\DAY21__Q41 }
Enter a number: 1001
Swapped number: 1001
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50> 
*/
