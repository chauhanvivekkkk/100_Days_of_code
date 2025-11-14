// C program to print each character of a string on a new line

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY41__Q82.c -o DAY41__Q82 } ; if ($?) { .\DAY41__Q82 }
Hi
H
i
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> 
*/
