/*
   Q. Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY89__Q139.c -o DAY89__Q139 } ; if ($?) { .\DAY89__Q139 }
SUCCESS=0, FAILURE=1, TIMEOUT=2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> 
*/
