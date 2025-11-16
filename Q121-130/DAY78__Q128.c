/*
Read a text file and count how many vowels and consonants are in the file. 
Ignore digits and special characters.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY78__Q128.c -o DAY78__Q128 } ; if ($?) { .\DAY78__Q128 }
Enter filename: text.txt
Vowels: 8
Consonants: 10
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
*/
