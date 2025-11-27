/*
     Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    char input[10];
    scanf("Gender=%s", input);

    struct Person p;

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    if (p.gender == MALE)
        printf("Male");
    else if (p.gender == FEMALE)
        printf("Female");
    else
        printf("Other");

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY90__Q140.c -o DAY90__Q140 } ; if ($?) { .\DAY90__Q140 }
Gender=MALE
Male
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> 
*/
