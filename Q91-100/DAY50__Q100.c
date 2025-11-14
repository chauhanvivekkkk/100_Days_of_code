// C program to print all substrings of a string

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n')
        len++;

    int first = 1;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {

            if (!first) printf(",");
            first = 0;

            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }

    return 0;
}

/*
Sample test case;
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY50__Q100.c -o DAY50__Q100 } ; if ($?) { .\DAY50__Q100 }
abc
a,ab,abc,b,bc,c
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100>
*/
