// Question: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d is a Leap Year.\n", year);
    else if (year % 100 == 0)
        printf("%d is not a Leap Year.\n", year);
    else if (year % 4 == 0)
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is not a Leap Year.\n", year);

    return 0;
}

// sample test cases:
/*
Sample Output 1:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY7__Q13.c -o DAY7__Q13 } ; if ($?) { .\DAY7__Q13 }
Enter a year: 2020
2020 is a Leap Year.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY7__Q13.c -o DAY7__Q13 } ; if ($?) { .\DAY7__Q13 }
Enter a year: 1900
1900 is not a Leap Year.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY7__Q13.c -o DAY7__Q13 } ; if ($?) { .\DAY7__Q13 }
Enter a year: 2000
2000 is a Leap Year.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> 
*/
