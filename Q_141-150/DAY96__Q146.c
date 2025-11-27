/* 
Q146 (Enum)
Create Employee structure with nested Date structure for joining date and print details.
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name,
           e.id,
           e.joining.day,
           e.joining.month,
           e.joining.year);

    return 0;
}

/*
SAMPLE TEST CASE:

PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY96__Q146.c -o DAY96__Q146 } ; if ($?) { .\DAY96__Q146 }
Enter Employee Name: Raj
Enter Employee ID: 11
Enter Joining Date (DD MM YYYY): 12 05 2020

Name: Raj | ID: 11 | Joining Date: 12/05/2020
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 
*/
