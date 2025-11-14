// C program to count characters in a string without using built-in length functions

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count++;
    }

    printf("%d", count);
    return 0;
}

/*
Sample test cases:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY41__Q81.c -o DAY41__Q81 } ; if ($?) { .\DAY41__Q81 }
Hello
5
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90\" ; if ($?) { gcc DAY41__Q81.c -o DAY41__Q81 } ; if ($?) { .\DAY41__Q81 }
 
1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q81-90> 
*/
