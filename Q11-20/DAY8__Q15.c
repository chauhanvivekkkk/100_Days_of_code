// Question: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to ignore newline character

    if (ch >= 'A' && ch <= 'Z')
        printf("%c is an Uppercase Alphabet.\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a Lowercase Alphabet.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c is a Digit.\n", ch);
    else
        printf("%c is a Special Character.\n", ch);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY8__Q15.c -o DAY8__Q15 } ; if ($?) { .\DAY8__Q15 }
Enter a character: a
a is a Lowercase Alphabet.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY8__Q15.c -o DAY8__Q15 } ; if ($?) { .\DAY8__Q15 }
Enter a character: A
A is an Uppercase Alphabet.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY8__Q15.c -o DAY8__Q15 } ; if ($?) { .\DAY8__Q15 }
Enter a character: 3
3 is a Digit.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY8__Q15.c -o DAY8__Q15 } ; if ($?) { .\DAY8__Q15 }
Enter a character: #
# is a Special Character.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20>
*/
