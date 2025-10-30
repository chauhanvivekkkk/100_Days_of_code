// Question: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0).\n");
    } 
    else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f, Root 2 = %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        root1 = root2 = -b / (2.0 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else {
        realPart = -b / (2.0 * a);
        imagPart = sqrt(-discriminant) / (2.0 * a);
        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi, Root 2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

// sample test cases:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY9__Q17.c -o DAY9__Q17 } ; if ($?) { .\DAY9__Q17 }
Enter coefficients a, b, and c: 1 -3 2
Roots are real and distinct.
Root 1 = 2.00, Root 2 = 1.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY9__Q17.c -o DAY9__Q17 } ; if ($?) { .\DAY9__Q17 }
Enter coefficients a, b, and c: 1 -2 1
Roots are real and equal.
Root 1 = Root 2 = 1.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY9__Q17.c -o DAY9__Q17 } ; if ($?) { .\DAY9__Q17 }
Enter coefficients a, b, and c: 1 2 5
Roots are complex and imaginary.
Root 1 = -1.00 + 2.00i, Root 2 = -1.00 - 2.00i
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20>
*/
