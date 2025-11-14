// C program to check if one string is a rotation of another

#include <stdio.h>

int stringLength(char s[]) {
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n')
        len++;
    return len;
}

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = stringLength(str1);
    int len2 = stringLength(str2);

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    // Create a combined string str1 + str1
    char combined[2000];
    int k = 0;

    for (int i = 0; i < len1; i++)
        combined[k++] = str1[i];
    for (int i = 0; i < len1; i++)
        combined[k++] = str1[i];

    combined[k] = '\0';

    // Check if str2 is a substring of combined
    int found = 0;
    for (int i = 0; i <= 2*len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (combined[i + j] != str2[j])
                break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY48__Q95.c -o DAY48__Q95 } ; if ($?) { .\DAY48__Q95 }
abcde
deabc
Rotation
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY48__Q95.c -o DAY48__Q95 } ; if ($?) { .\DAY48__Q95 }
abc
acb
Not rotation
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100>
*/
