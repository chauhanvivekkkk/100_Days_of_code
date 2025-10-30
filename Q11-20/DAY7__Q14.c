// Question: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||
            ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U') {
            printf("%c is a Vowel.\n", ch);
        } else {
            printf("%c is a Consonant.\n", ch);
        }
    } else {
        printf("Invalid input. Please enter an alphabet character.\n");
    }

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY7__Q14.c -o DAY7__Q14 } ; if ($?) { .\DAY7__Q14 }
Enter a character: a
a is a Vowel.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY7__Q14.c -o DAY7__Q14 } ; if ($?) { .\DAY7__Q14 }
Enter a character: b
b is a Consonant.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> 
*/
