// C program to reverse each word in a sentence without changing word order

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int start = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            // reverse from 'start' to i-1
            for (int j = i - 1; j >= start; j--) {
                printf("%c", j >= start ? str[j] : ' ');
            }

            if (str[i] == ' ')
                printf(" ");

            if (str[i] == '\n' || str[i] == '\0')
                break;

            start = i + 1; // next word begins
        }
    }

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY48__Q96.c -o DAY48__Q96 } ; if ($?) { .\DAY48__Q96 }
I love coding
I evol gnidoc
*/
