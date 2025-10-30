// Question: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %d\n", n, fact);

    return 0;
}

// SAMPLE TEST CASES:

/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY15__Q29.c -o DAY15__Q29 } ; if ($?) { .\DAY15__Q29 }
Enter a number: 5
Factorial of 5 = 120
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY15__Q29.c -o DAY15__Q29 } ; if ($?) { .\DAY15__Q29 }
Enter a number: 3
Factorial of 3 = 6
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> 

*/
