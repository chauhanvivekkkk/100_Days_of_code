// Question: Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY18__Q35.c -o DAY18__Q35 } ; if ($?) { .\DAY18__Q35 }
Enter a number: 6
Factors of 6 are: 1 2 3 6 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40\" ; if ($?) { gcc DAY18__Q35.c -o DAY18__Q35 } ; if ($?) { .\DAY18__Q35 }
Enter a number: 10
Factors of 10 are: 1 2 5 10 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> 
*/