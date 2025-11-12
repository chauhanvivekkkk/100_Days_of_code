/* 
Problem: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main(void) {
    int i;

    // First group: 1 star
    printf("*\n\n");

    // Second group: 2 stars
    for (i = 0; i < 2; i++) {
        printf("*\n");
    }
    printf("\n");

    // Third group: 5 stars
    for (i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fourth group: 3 stars
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fifth group: 1 star
    printf("*\n");

    return 0;
}

//OUTPUT:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY26__Q52.c -o DAY26__Q52 } ; if ($?) { .\DAY26__Q52 }
*

*
*

*
*
*
*
*

*
*
*

*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60>PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60\" ; if ($?) { gcc DAY26__Q52.c -o DAY26__Q52 } ; if ($?) { .\DAY26__Q52 }
*

*
*

*
*
*
*
*

*
*
*

*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q51-60>
*/