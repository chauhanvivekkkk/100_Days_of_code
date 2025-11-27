/*
   Q. Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum colors { RED, YELLOW, GREEN };

int main() {
    char *names[] = { "RED", "YELLOW", "GREEN" };

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY88__Q138.c -o DAY88__Q138 } ; if ($?) { .\DAY88__Q138 }
RED=0
YELLOW=1
GREEN=2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> 
*/
