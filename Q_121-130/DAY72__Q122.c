/*
Write a C program that opens an existing file and reads its contents using fgets(). 
The program should print all the lines to the console until EOF is reached.
Filename should be taken as input from the user.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY72__Q122.c -o DAY72__Q122 } ; if ($?) { .\DAY72__Q122 }
Enter filename: info.txt
Name: Rahul
Age: 23
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
*/
