// Question: Write a program to take a number as input and print its equivalent binary representation (without using arrays).

#include <stdio.h>

int main() {
    int num;
    long long binary = 0;
    int place = 1, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        rem = num % 2;           
        binary = binary + rem * place; 
        num = num / 2;           
        place = place * 10;      
    }

    printf("Binary: %lld\n", binary);

    return 0;
}

// sample tes5 cases:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY16__Q31.c -o DAY16__Q31 } ; if ($?) { .\DAY16__Q31 }
Enter a number: 10
Binary: 1010
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY16__Q31.c -o DAY16__Q31 } ; if ($?) { .\DAY16__Q31 }
Enter a number: 7
Binary: 111
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> 

*/
