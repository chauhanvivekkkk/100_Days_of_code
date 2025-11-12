/* 
Problem: Write a program to print the following pattern:
*
**
***
****
*****
*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 5; i++) {         // Loop for rows
        for (j = 1; j <= i; j++) {     // Print stars equal to row number
            printf("*");
        }
        printf("\n");                  // Move to next line
    }
    return 0;
}

// OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY24__Q47.c -o DAY24__Q47 } ; if ($?) { .\DAY24__Q47 }
*
**
***
****
*****
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50> 
*/