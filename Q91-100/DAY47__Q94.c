// C program to find the longest word in a sentence

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            if (currLen == 0)
                currStart = i;   // mark start of current word
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0; // reset for next word
        }
    }

    // Print longest word
    for (int i = 0; i < maxLen; i++) {
        printf("%c", str[maxStart + i]);
    }

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY47__Q94.c -o DAY47__Q94 } ; if ($?) { .\DAY47__Q94 }
I love programming
programming
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100>
*/
