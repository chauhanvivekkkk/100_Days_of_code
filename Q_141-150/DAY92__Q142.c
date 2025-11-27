/* 
Q: Store details of 5 students in an array of structures and print all.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("-------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY92__Q142.c -o DAY92__Q142 } ; if ($?) { .\DAY92__Q142 }
Enter details of 5 students:

Student 1
Enter Name: Aisha
Enter Roll: 101
Enter Marks: 90

Student 2
Enter Name: Rahul
Enter Roll: 102
Enter Marks: 85

Student 3
Enter Name: Neha
Enter Roll: 103
Enter Marks: 88

Student 4
Enter Name: Amit
Enter Roll: 104
Enter Marks: 92

Student 5
Enter Name: Pooja
Enter Roll: 105
Enter Marks: 80

--- Student Details ---
Name            Roll    Marks
-------------------------------
Aisha           101     90
Rahul           102     85
Neha            103     88
Amit            104     92
Pooja           105     80
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 
*/
