// C program to count vowels and consonants in a string

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = str[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            char ch = (c >= 'A' && c <= 'Z') ? c + 32 : c;  // convert to lowercase

            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY42__Q83.c -o DAY42__Q83 } ; if ($?) { .\DAY42__Q83 }
hello
Vowels=2, Consonants=3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> 
*/
