/*
   Problem:
   Write a C program to search for an element in an array 
   using linear search. 
*/
#include <stdio.h>

int main() {
    int n, i, key;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int found = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }

    if(found == -1)
        printf("-1");
    else
        printf("Found at index %d", found);

    return 0;
}
/*
SAMPLE TEST CASES:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY31__Q61.c -o DAY31__Q61 } ; if ($?) { .\DAY31__Q61 }
5
1 2 3 4 5 
2
Found at index 1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { gcc DAY31__Q61.c -o DAY31__Q61 } ; if ($?) { .\DAY31__Q61 }
4
10 20 30 40 
25
-1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> 
*/