/*
A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    int num, sum = 0, count = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in file!\n");
        return 1;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    return 0;
}

/*
SAMPLE TEST CASE:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130\" ; if ($?) { gcc DAY79__Q129.c -o DAY79__Q129 } ; if ($?) { .\DAY79__Q129 }
Enter filename: numbers.txt
Sum = 150
Average = 30.00
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q_121-130> 
*/
