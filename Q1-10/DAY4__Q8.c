// Question: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY4__Q8.c -o DAY4__Q8 } ; if ($?) { .\DAY4__Q8 }
Enter the value of n: 5
Sum of first 5 natural numbers = 15
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY4__Q8.c -o DAY4__Q8 } ; if ($?) { .\DAY4__Q8 }
Enter the value of n: 10
Sum of first 10 natural numbers = 55
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> 
*/
