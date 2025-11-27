/*
    PROBLEM:
    Write a program to take an integer array nums of size n and print the majority element.
    The majority element appears STRICTLY more than floor(n/2) times.
    If no such element exists, print -1.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Boyer-Moore Voting Algorithm
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY55__Q105.c -o DAY55__Q105 } ; if ($?) { .\DAY55__Q105 }
3
3 2 3
3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY55__Q105.c -o DAY55__Q105 } ; if ($?) { .\DAY55__Q105 }
7
2 2 1 1 1 2 2
2
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY55__Q105.c -o DAY55__Q105 } ; if ($?) { .\DAY55__Q105 }
8
2 2 1 1 1 2 2 3
-1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110>
*/
