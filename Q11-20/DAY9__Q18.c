// Question: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
// 90-100: Grade A
// 80-89: Grade B
// 70-79: Grade C
// 60-69: Grade D
// below 60: Grade F

#include <stdio.h>

int main() {
    int percentage;

    printf("Enter your percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
    } 
    else if (percentage >= 90) {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80) {
        printf("Grade: B\n");
    } 
    else if (percentage >= 70) {
        printf("Grade: C\n");
    } 
    else if (percentage >= 60) {
        printf("Grade: D\n");
    } 
    else {
        printf("Grade: F\n");
    }

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY9__Q18.c -o DAY9__Q18 } ; if ($?) { .\DAY9__Q18 }
Enter your percentage (0-100): 95
Grade: A
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY9__Q18.c -o DAY9__Q18 } ; if ($?) { .\DAY9__Q18 }
Enter your percentage (0-100): 82
Grade: B
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY9__Q18.c -o DAY9__Q18 } ; if ($?) { .\DAY9__Q18 }
Enter your percentage (0-100): 68
Grade: D
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20\" ; if ($?) { gcc DAY9__Q18.c -o DAY9__Q18 } ; if ($?) { .\DAY9__Q18 }
Enter your percentage (0-100): 50
Grade: F
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q11-20> 
*/
