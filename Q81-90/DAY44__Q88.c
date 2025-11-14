// C program to replace spaces with hyphens in a string

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY44__Q88.c -o DAY44__Q88 } ; if ($?) { .\DAY44__Q88 }
hello world
hello-world
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90>
*/
