/* 
Problem: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main(void) {
    int i, j, space;
    for (i = 5; i >= 1; i--) {          // Loop for rows
        for (space = 5; space > i; space--) {   // Print leading spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) {      // Print stars
            printf("*");
        }
        printf("\n");                   // Move to next line
    }
    return 0;
}
// OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50\" ; if ($?) { gcc DAY25__Q50.c -o DAY25__Q50 } ; if ($?) { .\DAY25__Q50 }
*****
 ****
  ***
   **
    *
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q41-50>
*/