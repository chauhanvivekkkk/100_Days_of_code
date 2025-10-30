// Question: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;          // 1 hour = 3600 seconds
    total_seconds = total_seconds % 3600;  // remaining seconds

    minutes = total_seconds / 60;          // 1 minute = 60 seconds
    seconds = total_seconds % 60;          // remaining seconds

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY5__Q10.c -o DAY5__Q10 } ; if ($?) { .\DAY5__Q10 }
Enter time in seconds: 3661
Time = 01:01:01
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY5__Q10.c -o DAY5__Q10 } ; if ($?) { .\DAY5__Q10 }
Enter time in seconds: 7322
Time = 02:02:02
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> 
*/
