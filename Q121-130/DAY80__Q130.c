/*
Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[50];

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY80__Q130.c -o DAY80__Q130 } ; if ($?) { .\DAY80__Q130 }
Enter number of students: 2
Enter Name, Roll, Marks: Asha 101 85
Enter Name, Roll, Marks: Ravi 102 92

Student Records:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 

*/
