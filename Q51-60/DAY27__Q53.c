/* 
Problem: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main(void) {
    int i, j;

    // Upper pyramid
    for (i = 1; i <= 5; i++) {                // Loop for rows (1 to 5)
        for (j = 1; j <= (2 * i - 1); j++) {  // Print 1, 3, 5, 7, 9 stars
            printf("*");
        }
        printf("\n");                         // Move to next line
    }

    // Lower inverted pyramid
    for (i = 4; i >= 1; i--) {                // Loop for rows (4 to 1)
        for (j = 1; j <= (2 * i - 1); j++) {  // Print 7, 5, 3, 1 stars
            printf("*");
        }
        printf("\n");                         // Move to next line
    }

    return 0;
}
//OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY27__Q53.c -o DAY27__Q53 } ; if ($?) { .\DAY27__Q53 }
*
***
*****
*******
*********
*******
*****
***
*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60>
*/