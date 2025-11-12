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
    int i, j, space;
    for (i = 5; i >= 1; i--) {                // Loop for rows
        for (space = 1; space < i; space++) { // Print leading spaces
            printf(" ");
        }
        for (j = i; j <= 5; j++) {            // Print numbers from i to 5
            printf("%d", j);
        }
        printf("\n");                         // Move to next line
    }
    return 0;
}
// OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY26__Q51.c -o DAY26__Q51 } ; if ($?) { .\DAY26__Q51 }
    5
   45
  345
 2345
12345
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60> 
*/