/* 
Problem: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 0; i < 5; i++) {          // Loop for 5 rows
        for (j = 0; j < 5; j++) {      // Loop for 5 columns
            printf("*");
        }
        printf("\n");                  // Move to next line after each row
    }
    return 0;
}

// OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY23__Q46.c -o DAY23__Q46 } ; if ($?) { .\DAY23__Q46 }
*****
*****
*****
*****
*****
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50>
*/