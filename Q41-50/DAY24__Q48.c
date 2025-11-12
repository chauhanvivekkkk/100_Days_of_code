/* 
Q48 (Nested Loops without Arrays/Strings)
Problem: Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 5; i++) {          // Loop for rows
        for (j = 1; j <= i; j++) {      // Print numbers from 1 to i
            printf("%d", j);
        }
        printf("\n");                   // Move to next line after each row
    }
    return 0;
}
// OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY24__Q48.c -o DAY24__Q48 } ; if ($?) { .\DAY24__Q48 }
1
12
123
1234
12345
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50>
*/
