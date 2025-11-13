/*
   Problem:
   Write a C program to find the digit (0–9) that occurs 
   the most number of times in a given integer number.
*/

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    long long temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit with highest frequency: %d", maxDigit);

    return 0;
}
/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY32__Q64.c -o DAY32__Q64 } ; if ($?) { .\DAY32__Q64 }
Enter a number: 112233
Digit with highest frequency: 1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY32__Q64.c -o DAY32__Q64 } ; if ($?) { .\DAY32__Q64 }
Enter a number: 887799
Digit with highest frequency: 7
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70>
*/