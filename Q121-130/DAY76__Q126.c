/*
Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message. Otherwise, read and display its content.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}

/*
SAMPLE TEST CASE 1:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY76__Q126.c -o DAY76__Q126 } ; if ($?) { .\DAY76__Q126 }
Enter filename: sample.txt
File opened successfully.
Hello World
This is C programming
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY76__Q126.c -o DAY76__Q126 } ; if ($?) { .\DAY76__Q126 }
Enter filename: nofile.txt
Error: File does not exist!
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
----------------------------------------

SAMPLE TEST CASE 2:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY76__Q126.c -o DAY76__Q126 } ; if ($?) { .\DAY76__Q126 }
Enter filename: nofile.txt
Error: File does not exist!
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
----------------------------------------
*/
