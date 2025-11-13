/*
   Problem:
   Write a C program to search for an element in a 
   sorted array using binary search. 
   If found, print its index; otherwise, print -1.
*/

#include <stdio.h>

int main() {
    int n, key, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int left = 0, right = n - 1, mid, found = -1;

    while(left <= right) {
        mid = (left + right) / 2;

        if(arr[mid] == key) {
            found = mid;
            break;
        }
        else if(arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
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
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { g++ DAY33__Q65.C -o DAY33__Q65 } ; if ($?) { .\DAY33__Q65 }
Enter size of array: 5
Enter sorted array elements: 1 3 5 7 9
Enter element to search: 7
Found at index 3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70\" ; if ($?) { g++ DAY33__Q65.C -o DAY33__Q65 } ; if ($?) { .\DAY33__Q65 }
Enter size of array: 5
Enter sorted array elements: 1 3 5 7 9 
Enter element to search: 6
-1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q61-70> 
*/