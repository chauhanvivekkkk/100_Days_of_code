// Question: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY2__Q3.c -o DAY2__Q3 } ; if ($?) { .\DAY2__Q3 }
Enter length and breadth of the rectangle: 5 10
Area = 50.00
Perimeter = 30.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY2__Q3.c -o DAY2__Q3 } ; if ($?) { .\DAY2__Q3 }
Enter length and breadth of the rectangle: 3 7
Area = 21.00
Perimeter = 20.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10>
*/
