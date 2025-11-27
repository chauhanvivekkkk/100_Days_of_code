/*
    PROBLEM:
    Write a program to take two strings s and t as inputs (lowercase only).
    Determine if s and t are anagrams — meaning both contain the same characters
    with the same frequencies.
    Print "Anagram" if true, else "Not Anagram".
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100005], t[100005];
    scanf("%s", s);
    scanf("%s", t);

    // If lengths differ, not anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY65__Q115.c -o DAY65__Q115 } ; if ($?) { .\DAY65__Q115 }
anagram
nagaram
Anagram
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY65__Q115.c -o DAY65__Q115 } ; if ($?) { .\DAY65__Q115 }
rat
car
Not Anagram
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> 
*/
