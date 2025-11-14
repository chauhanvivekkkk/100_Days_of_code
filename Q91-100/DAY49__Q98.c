// C program to print initials of a name with surname in full

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int lastSpace = -1;

    // Find the position of the last space (before surname)
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    // Print initials (all words before surname)
    if (str[0] != ' ' && str[0] != '\n') {
        char c = str[0];
        if (c >= 'a' && c <= 'z') c -= 32;
        printf("%c.", c);
    }

    for (int i = 1; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n') {
            char c = str[i+1];
            if (c >= 'a' && c <= 'z') c -= 32;
            printf("%c.", c);
        }
    }

    // Print surname (full)
    printf(" ");

    for (int i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY49__Q98.c -o DAY49__Q98 } ; if ($?) { .\DAY49__Q98 }
John Doe
J. Doe
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100>
*/
