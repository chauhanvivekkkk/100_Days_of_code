// C program to convert a lowercase string to uppercase without using built-in functions

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert to uppercase
        }
    }

    printf("%s", str);

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY42__Q84.c -o DAY42__Q84 } ; if ($?) { .\DAY42__Q84 }
hello
HELLO
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> 
*/
