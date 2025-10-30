// Question: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking triangle validity
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("The triangle is Equilateral.\n");
        else if (a == b || b == c || a == c)
            printf("The triangle is Isosceles.\n");
        else
            printf("The triangle is Scalene.\n");
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}

/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY10__Q19.c -o DAY10__Q19 } ; if ($?) { .\DAY10__Q19 }
Enter the three sides of the triangle: 3 3 3 
The triangle is Equilateral.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY10__Q19.c -o DAY10__Q19 } ; if ($?) { .\DAY10__Q19 }
Enter the three sides of the triangle: 3 3 4 
The triangle is Isosceles.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY10__Q19.c -o DAY10__Q19 } ; if ($?) { .\DAY10__Q19 }
Enter the three sides of the triangle: 2 3 4
The triangle is Scalene.
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> 

*/
