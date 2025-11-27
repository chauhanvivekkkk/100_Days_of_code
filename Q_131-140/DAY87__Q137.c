/*
   Q. Create an enum for user roles (ADMIN, USER, GUEST)
      and display messages based on the role.
*/

#include <stdio.h>
#include <string.h>

enum role { ADMIN, USER, GUEST };

int main() {
    char input[10];
    scanf("%s", input);

    enum role r;

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else
        r = GUEST;

    if (r == ADMIN)
        printf("Welcome Admin!");
    else if (r == USER)
        printf("Welcome User!");
    else
        printf("Welcome Guest!");

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY87__Q137.c -o DAY87__Q137 } ; if ($?) { .\DAY87__Q137 }
GUEST
Welcome Guest!
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> 
*/
