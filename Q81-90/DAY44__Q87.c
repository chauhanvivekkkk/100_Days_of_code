// C program to count spaces, digits, and special characters in a string

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int spaces = 0, digits = 0, special = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = str[i];

        if (c == ' ')
            spaces++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY44__Q87.c -o DAY44__Q87 } ; if ($?) { .\DAY44__Q87 }
a b1&2
Spaces=1, Digits=2, Special=1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90>
*/
