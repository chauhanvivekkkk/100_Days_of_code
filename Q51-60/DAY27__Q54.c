/* 
Problem: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main(void) {
    int i, j, space;

    // Upper pyramid
    for (i = 1; i <= 4; i++) {                      // Rows for upper half
        for (space = i; space < 4; space++) {        // Print leading spaces
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {         // Print stars
            printf("*");
        }
        printf("\n");
    }

    // Lower inverted pyramid
    for (i = 3; i >= 1; i--) {                      // Rows for lower half
        for (space = 4; space > i; space--) {        // Print leading spaces
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {         // Print stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY27__Q54.c -o DAY27__Q54 } ; if ($?) { .\DAY27__Q54 }
   *
  ***
 *****
*******
 *****
  ***
   *
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60>
*/