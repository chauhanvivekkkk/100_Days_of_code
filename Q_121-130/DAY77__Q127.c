/*
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, 
and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening output file!\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed. Output written to output.txt\n");

    return 0;
}

/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY77__Q127.c -o DAY77__Q127 } ; if ($?) { .\DAY77__Q127 }
Conversion completed. Output written to output.txt
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
*/
