/*
Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch) && inWord == 0) {
            words++;
            inWord = 1;
        } 
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY73__Q123.c -o DAY73__Q123 } ; if ($?) { .\DAY73__Q123 }
Enter filename: sample.txt
Characters: 33
Words: 6
Lines: 1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
*/
