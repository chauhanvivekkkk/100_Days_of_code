// C program to print the initials of a name

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    // Print first initial
    if (str[0] != ' ' && str[0] != '\n') {
        char c = str[0];
        if (c >= 'a' && c <= 'z') c -= 32;
        printf("%c.", c);
    }

    // Print initials after each space
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
            char c = str[i+1];
            if (c >= 'a' && c <= 'z') c -= 32;
            printf("%c.", c);
        }
    }

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY49__Q97.c -o DAY49__Q97 } ; if ($?) { .\DAY49__Q97 }
John Doe
J.D.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100>
*/
