// C program to reverse a string

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY43__Q85.c -o DAY43__Q85 } ; if ($?) { .\DAY43__Q85 }
abcd
dcba
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90>
*/
