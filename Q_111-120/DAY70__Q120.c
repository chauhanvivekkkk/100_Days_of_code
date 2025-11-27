/*
    PROBLEM:
    Write a program to take a string input and convert it to Sentence Case.
    That means capitalize the first letter of every word.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    int makeCapital = 1; // Flag to capitalize next alphabet

    for (int i = 0; str[i] != '\0'; i++) {
        if (makeCapital && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            makeCapital = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == ' ')
            makeCapital = 1;
    }

    printf("%s", str);

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY70__Q120.c -o DAY70__Q120 } ; if ($?) { .\DAY70__Q120 }
I am trying to build logic. 
I Am Trying To Build Logic.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY70__Q120.c -o DAY70__Q120 } ; if ($?) { .\DAY70__Q120 }
The classes are supposed to start early.
The Classes Are Supposed To Start Early.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120\" ; if ($?) { gcc DAY70__Q120.c -o DAY70__Q120 } ; if ($?) { .\DAY70__Q120 }
We are going to look at 26 different test cases.
We Are Going To Look At 26 Different Test Cases.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q111-120> 
*/