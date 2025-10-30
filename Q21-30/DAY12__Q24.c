// Question: Write a program to calculate electricity bill based on units consumed with these rates:
// First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// Above 300 units at ₹12/unit

#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid input! Units must be greater than 0.\n");
    }
    else if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q31-40> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY12__Q24.c -o DAY12__Q24 } ; if ($?) { .\DAY12__Q24 }
Enter total units consumed: 50
Total Electricity Bill = Γé╣250.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY12__Q24.c -o DAY12__Q24 } ; if ($?) { .\DAY12__Q24 }
Enter total units consumed: 150
Total Electricity Bill = Γé╣850.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY12__Q24.c -o DAY12__Q24 } ; if ($?) { .\DAY12__Q24 }
Enter total units consumed: 250
Total Electricity Bill = Γé╣1700.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> 
*/
