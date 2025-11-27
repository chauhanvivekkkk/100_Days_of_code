/* 
Q: Use malloc() to allocate structure memory dynamically and print details.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    /* Dynamic memory allocation */
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter Student Name: ");
    scanf("%s", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    printf("\nName: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    /* Free allocated memory */
    free(s);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150\" ; if ($?) { gcc DAY99__Q149.c -o DAY99__Q149 } ; if ($?) { .\DAY99__Q149 }
Enter Student Name: Tina 105 88
Enter Roll: Enter Marks: 
Name: Tina | Roll: 105 | Marks: 88
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_141-150> 

*/
