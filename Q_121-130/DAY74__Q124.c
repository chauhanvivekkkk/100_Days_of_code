/*
Take two filenames from the user – a source file and a destination file.
Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY74__Q124.c -o DAY74__Q124 } ; if ($?) { .\DAY74__Q124 }
Enter source filename: source.txt
Enter destination filename: destination.txt
File copied successfully to destination.txt
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
*/
