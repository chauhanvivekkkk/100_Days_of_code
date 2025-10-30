// Question: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area, circumference;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}

// SAMPLE TEST CASES:
/* PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY2__Q4.c -o DAY2__Q4 } ; if ($?) { .\DAY2__Q4 }
Enter radius of the circle: 7
Area = 153.94
Circumference = 43.98
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10\" ; if ($?) { gcc DAY2__Q4.c -o DAY2__Q4 } ; if ($?) { .\DAY2__Q4 }
Enter radius of the circle: 3
Area = 28.27
Circumference = 18.85
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q1-10>
*/