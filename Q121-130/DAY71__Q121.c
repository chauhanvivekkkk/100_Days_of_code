/* 
Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to the file using fprintf(). 
After writing, display a message confirming that the data was successfully saved.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY71__Q121.c -o DAY71__Q121 } ; if ($?) { .\DAY71__Q121 }
Enter name: Rahul
Enter age: 23
File created successfully! Data written to info.txt
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
*/
