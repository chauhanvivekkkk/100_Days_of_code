// Question: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY13__Q26.c -o DAY13__Q26 } ; if ($?) { .\DAY13__Q26 }
Enter the value of n: 5
Numbers from 1 to 5 are:
1 2 3 4 5 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY13__Q26.c -o DAY13__Q26 } ; if ($?) { .\DAY13__Q26 }
Enter the value of n: 3
Numbers from 1 to 3 are:
1 2 3 
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> 
*/
