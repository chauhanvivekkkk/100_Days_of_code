/*
    PROBLEM:
    Write a Program to take a positive integer n as input and find the pivot integer x
    such that:
        sum(1 to x) = sum(x to n)
    If such an integer exists, print x.
    Otherwise, print -1.
    There will be at most one pivot for a given n.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;
    
    int x = -1;
    for (int i = 1; i <= n; i++) {
        long long left = (long long)i * (i + 1) / 2;
        long long right = total - (long long)(i - 1) * i / 2;

        if (left == right) {
            x = i;
            break;
        }
    }

    printf("%d", x);

    return 0;
}

/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY54__Q104.c -o DAY54__Q104 } ; if ($?) { .\DAY54__Q104 }
8
6
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY54__Q104.c -o DAY54__Q104 } ; if ($?) { .\DAY54__Q104 }
1
1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110\" ; if ($?) { gcc DAY54__Q104.c -o DAY54__Q104 } ; if ($?) { .\DAY54__Q104 }
4
-1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q101-110> 
*/
