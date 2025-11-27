/* 
Q: Find and print the student with the highest marks.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[3];
    int i, max;

    printf("Enter details of 3 students (Name Roll Marks):\n");

    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    max = 0;
    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n", s[max].name, s[max].marks);

    return 0;
}

/*
SAMPLE TEST CASE:

PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY93__Q143.c -o DAY93__Q143 } ; if ($?) { .\DAY93__Q143 }
Enter details of 3 students (Name Roll Marks):
Ravi 101 95
Sita 102 85
Aman 103 88

Topper: Ravi (Marks: 95)
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 
*/
