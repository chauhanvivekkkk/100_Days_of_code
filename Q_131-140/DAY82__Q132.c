/*
   Q. Define an enum for traffic lights (RED, YELLOW, GREEN)
   and print 'Stop', 'Wait', or 'Go' based on its value.
*/

#include <stdio.h>
#include <string.h>

enum signal { RED, YELLOW, GREEN };

int main() {
    char input[10];
    scanf("%s", input);

    enum signal light;

    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else
        light = GREEN;

    if (light == RED)
        printf("Stop");
    else if (light == YELLOW)
        printf("Wait");
    else
        printf("Go");

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY82__Q132.c -o DAY82__Q132 } ; if ($?) { .\DAY82__Q132 }
GREEN
Go
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY82__Q132.c -o DAY82__Q132 } ; if ($?) { .\DAY82__Q132 }
YELLOW
Wait
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY82__Q132.c -o DAY82__Q132 } ; if ($?) { .\DAY82__Q132 }
RED
Stop
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> 
*/
