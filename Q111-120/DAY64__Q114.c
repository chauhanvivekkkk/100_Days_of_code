/*
    PROBLEM:
    Write a program to take a string s as input.
    Find the length of the longest substring without repeating characters.
    Print the length as output.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    if (scanf("%100004s", s) != 1) return 0;

    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int start = 0;        // start index of current window (inclusive)
    int maxlen = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) {
            // character repeated inside current window -> move start
            start = last[c] + 1;
        }
        last[c] = i; // update last occurrence
        int curlen = i - start + 1;
        if (curlen > maxlen) maxlen = curlen;
    }

    printf("%d", maxlen);
    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY64__Q114.c -o DAY64__Q114 } ; if ($?) { .\DAY64__Q114 }
abcabcbb
3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY64__Q114.c -o DAY64__Q114 } ; if ($?) { .\DAY64__Q114 }
bbbbb
1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY64__Q114.c -o DAY64__Q114 } ; if ($?) { .\DAY64__Q114 }
pwwkew
3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> 
*/
