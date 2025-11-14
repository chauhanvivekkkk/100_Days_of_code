// C program to count frequency of a given character in a string

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    char ch;
    scanf("%c", &ch);

    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d", count);

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY45__Q89.c -o DAY45__Q89 } ; if ($?) { .\DAY45__Q89 }
programming
g
2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90>
*/
