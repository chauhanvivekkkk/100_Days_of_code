// C program to toggle case of each character in a string

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // lowercase → uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // uppercase → lowercase
    }

    printf("%s", str);

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY45__Q90.c -o DAY45__Q90 } ; if ($?) { .\DAY45__Q90 }
Hello
hELLO
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90>
*/
