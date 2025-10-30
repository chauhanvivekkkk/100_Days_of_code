// Question: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in this range.\n");
        return 0;
    }

    for (i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %d\n", n, product);

    return 0;
}

/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY14__Q28.c -o DAY14__Q28 } ; if ($?) { .\DAY14__Q28 }
Enter the value of n: 4
Product of even numbers from 1 to 4 = 8
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY14__Q28.c -o DAY14__Q28 } ; if ($?) { .\DAY14__Q28 }
Enter the value of n: 6
Product of even numbers from 1 to 6 = 48
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> 

*/
