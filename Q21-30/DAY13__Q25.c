// Question: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
            break;
        case '%':
            if (num2 == 0)
                printf("Error: Modulus by zero is not allowed.\n");
            else
                printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

// SAMPLE TEST CASES:
/*
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY13__Q25.c -o DAY13__Q25 } ; if ($?) { .\DAY13__Q25 }
Enter first number: 4
Enter an operator (+, -, *, /, %): +
Enter second number: 2
Result: 4 + 2 = 6
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY13__Q25.c -o DAY13__Q25 } ; if ($?) { .\DAY13__Q25 }
Enter first number: 10
Enter an operator (+, -, *, /, %): %
Enter second number: 3
Result: 10 % 3 = 1
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30\" ; if ($?) { gcc DAY13__Q25.c -o DAY13__Q25 } ; if ($?) { .\DAY13__Q25 }
Enter first number: 15
Enter an operator (+, -, *, /, %): /
Enter second number: 5
Result: 15 / 5 = 3
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q21-30>


*/
