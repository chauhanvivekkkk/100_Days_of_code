/*
   Q. Define an enum with SUCCESS, FAILURE, and TIMEOUT,
      and print messages accordingly.
*/

#include <stdio.h>
#include <string.h>

enum status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char input[10];
    scanf("%s", input);

    enum status s;

    if (strcmp(input, "SUCCESS") == 0)
        s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        s = FAILURE;
    else
        s = TIMEOUT;

    if (s == SUCCESS)
        printf("Operation successful");
    else if (s == FAILURE)
        printf("Operation failed");
    else
        printf("Operation timed out");

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY84__Q134.c -o DAY84__Q134 } ; if ($?) { .\DAY84__Q134 }
failure
Operation timed out
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> 

*/
