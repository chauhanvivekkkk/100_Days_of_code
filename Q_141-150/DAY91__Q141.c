/* 
Q: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    printf("\nName: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY91__Q141.c -o DAY91__Q141 } ; if ($?) { .\DAY91__Q141 }
Enter Name: Aisha
Enter Roll: 101
Enter Marks: 90

Name: Aisha | Roll: 101 | Marks: 90
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 

*/
