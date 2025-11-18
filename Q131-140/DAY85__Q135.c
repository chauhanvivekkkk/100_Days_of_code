/*
   Q. Assign explicit values starting from 10 in an enum and print them.
*/

#include <stdio.h>

enum letters { A = 10, B, C };

int main() {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140\" ; if ($?) { gcc DAY85__Q135.c -o DAY85__Q135 } ; if ($?) { .\DAY85__Q135 }
A=10
B=11
C=12
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q131-140> 
*/
