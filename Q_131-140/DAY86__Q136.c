/*
   Q. Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY)
      and perform operations using switch.
*/

#include <stdio.h>
#include <string.h>

enum menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[15];
    int a, b;

    scanf("%s %d %d", op, &a, &b);

    enum menu choice;

    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY86__Q136.c -o DAY86__Q136 } ; if ($?) { .\DAY86__Q136 }
ADD 10 20
30
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> 
*/
