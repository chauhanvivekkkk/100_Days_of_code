/*
Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();               // Clear newline from buffer
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY75__Q125.c -o DAY75__Q125 } ; if ($?) { .\DAY75__Q125 }
Enter filename: data.txt
Enter text to append: This is appended text.
File updated successfully with appended text.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
*/
