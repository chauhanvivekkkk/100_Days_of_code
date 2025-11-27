/* 
Q: Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

/* Function to return top student */
struct Student getTopStudent(struct Student s[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   // returning structure
}

int main() {
    struct Student s[3], top;
    int i;

    printf("Enter details of 3 students (Name Roll Marks):\n");

    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    top = getTopStudent(s, 3);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY95__Q145.c -o DAY95__Q145 } ; if ($?) { .\DAY95__Q145 }
Enter details of 3 students (Name Roll Marks):
Riya 101 89
Karan 102 96
Meena 103 92

Top Student: Karan | Roll: 102 | Marks: 96
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 


*/
