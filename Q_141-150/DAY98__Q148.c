/* 
Q: Take two structs as input and check if they are identical.
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter Student 1 details (Name Roll Marks):\n");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    printf("Enter Student 2 details (Name Roll Marks):\n");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        printf("\nSame\n");
    } else {
        printf("\nNot Same\n");
    }

    return 0;
}

/*
SAMPLE TEST CASE:

PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY98__Q148.c -o DAY98__Q148 } ; if ($?) { .\DAY98__Q148 }
Enter Student 1 details (Name Roll Marks):
Aisha 101 90
Enter Student 2 details (Name Roll Marks):
Aisha 101 90

Same
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 

*/
