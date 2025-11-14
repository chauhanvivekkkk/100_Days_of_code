// C program to remove all vowels from a string

#include <stdio.h>

int isVowel(char c) {
    // convert to lowercase for easy comparison
    if (c >= 'A' && c <= 'Z') c = c + 32;

    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (!isVowel(str[i])) {
            printf("%c", str[i]);
        }
    }

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY46__Q91.c -o DAY46__Q91 } ; if ($?) { .\DAY46__Q91 }
education
dctn
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100>
*/
