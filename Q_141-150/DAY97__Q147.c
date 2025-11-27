/* 
Q: Store employee data in a binary file using fwrite() and read using fread().
*/

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    /* Input employee details */
    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &e1.salary);

    /* Write to binary file */
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    /* Read from binary file */
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    /* Display data read from file */
    printf("\nEmployee Data Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", 
            e2.name, e2.id, e2.salary);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY97__Q147.c -o DAY97__Q147 } ; if ($?) { .\DAY97__Q147 }
Enter Employee Name: Raj
Enter Employee ID: 11
Enter Employee Salary: 35000

Employee Data Read From File:
Name: Raj | ID: 11 | Salary: 35000.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 
*/
