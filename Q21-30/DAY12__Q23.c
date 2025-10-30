// Question: Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days late: ₹6/day
// More than 30 days: Membership Cancelled.

#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter number of days book is returned late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time.\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%d\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine = ₹%d\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine = ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY12__Q23.c -o DAY12__Q23 } ; if ($?) { .\DAY12__Q23 }
Enter number of days book is returned late: 4
Fine = Γé╣8
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY12__Q23.c -o DAY12__Q23 } ; if ($?) { .\DAY12__Q23 }
Enter number of days book is returned late: 8
Fine = Γé╣22
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY12__Q23.c -o DAY12__Q23 } ; if ($?) { .\DAY12__Q23 }
Enter number of days book is returned late: 15
Fine = Γé╣60
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY12__Q23.c -o DAY12__Q23 } ; if ($?) { .\DAY12__Q23 }
Enter number of days book is returned late: 31
Membership Cancelled.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30>
*/
