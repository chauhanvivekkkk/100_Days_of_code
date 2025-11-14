// C program to change the date format from dd/mm/yyyy to dd-MMM-yyyy

#include <stdio.h>

int main() {
    char date[20];
    fgets(date, sizeof(date), stdin);

    char day[3], month[3], year[5];
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    char mon[10];

    if (month[0]=='0' && month[1]=='1') sprintf(mon, "Jan");
    else if (month[0]=='0' && month[1]=='2') sprintf(mon, "Feb");
    else if (month[0]=='0' && month[1]=='3') sprintf(mon, "Mar");
    else if (month[0]=='0' && month[1]=='4') sprintf(mon, "Apr");
    else if (month[0]=='0' && month[1]=='5') sprintf(mon, "May");
    else if (month[0]=='0' && month[1]=='6') sprintf(mon, "Jun");
    else if (month[0]=='0' && month[1]=='7') sprintf(mon, "Jul");
    else if (month[0]=='0' && month[1]=='8') sprintf(mon, "Aug");
    else if (month[0]=='0' && month[1]=='9') sprintf(mon, "Sep");
    else if (month[0]=='1' && month[1]=='0') sprintf(mon, "Oct");
    else if (month[0]=='1' && month[1]=='1') sprintf(mon, "Nov");
    else if (month[0]=='1' && month[1]=='2') sprintf(mon, "Dec");

    printf("%s-%s-%s", day, mon, year);

    return 0;
}

/*
Sample test case:
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100> cd "c:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100\" ; if ($?) { gcc DAY50__Q99.c -o DAY50__Q99 } ; if ($?) { .\DAY50__Q99 }
15/04/2025
15-Apr-2025
PS C:\Users\Lenovo\OneDrive\Documents\100_Days_of_code\Q91-100>
*/
