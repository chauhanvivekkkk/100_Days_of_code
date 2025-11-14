// C program to find the first repeating lowercase alphabet in a string

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int freq[26] = {0};  // frequency array for 'a' to 'z'

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;

            if (freq[c - 'a'] == 2) {   // first repeating character
                printf("%c", c);
                return 0;
            }
        }
    }

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY46__Q92.c -o DAY46__Q92 } ; if ($?) { .\DAY46__Q92 }
stress
s
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100>
*/

