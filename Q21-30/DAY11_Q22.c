// Question: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (costPrice <= 0) {
        printf("Invalid Cost Price! It must be greater than 0.\n");
        return 0;
    }

    if (sellingPrice > costPrice) {
        profitOrLoss = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit Percentage = %.2f%%\n", profitOrLoss);
    } 
    else if (sellingPrice < costPrice) {
        profitOrLoss = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss Percentage = %.2f%%\n", profitOrLoss);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY11_Q22.c -o DAY11_Q22 } ; if ($?) { .\DAY11_Q22 }
Enter Cost Price: 1000
Enter Selling Price: 1200
Profit Percentage = 20.00%
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY11_Q22.c -o DAY11_Q22 } ; if ($?) { .\DAY11_Q22 }
Enter Cost Price: 1000
Enter Selling Price: 800
Loss Percentage = 20.00%
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY11_Q22.c -o DAY11_Q22 } ; if ($?) { .\DAY11_Q22 }
Enter Cost Price: 1000
Enter Selling Price: 1000
No Profit, No Loss.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30>
*/
