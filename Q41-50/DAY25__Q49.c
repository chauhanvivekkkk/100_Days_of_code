/* 
Problem: Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 5; i >= 1; i--) {          // Start from 5 down to 1
        for (j = i; j <= 5; j++) {      // Print numbers from i to 5
            printf("%d", j);
        }
        printf("\n");                   // Move to next line after each row
    }
    return 0;
}
// OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY25__Q49.c -o DAY25__Q49 } ; if ($?) { .\DAY25__Q49 }
5
45
345
2345
12345
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50>
*/