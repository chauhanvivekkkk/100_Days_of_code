/* 
Q: Write a function that accepts a structure as parameter and prints its members.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

/* Function to print structure data */
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter Student Name, Roll and Marks:\n");
    scanf("%s %d %d", s.name, &s.roll, &s.marks);

    printStudent(s);

    return 0;
}

/*
SAMPLE TEST CASE:

PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY94__Q144.c -o DAY94__Q144 } ; if ($?) { .\DAY94__Q144 }
Enter Student Name, Roll and Marks:
Neha 104 92
Name: Neha | Roll: 104 | Marks: 92
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 

*/
