/*
1. Write a program to display number of days in the given month and year using switch case
statement.
*/

#include <stdio.h>

int isleap(int year);

int main() {
    
     int month, year;
    printf("Enter Month (1-12): ");
    scanf("%d",&month);
    if (month < 1 || month > 12)
    {
            printf("Invalid Month!!  Try again...\n");
            return 1;
    }
    printf("Enter Year : ");
    scanf("%d",&year);
    int days;
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 2:
        days = isleap(year) ? 29 : 28;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    default:
        days = 0; /* invalid month handled earlier */
        break;
    }

    printf("Using Switch Case      : Month %d, Year %d has %d days.\n", month, year, days);
    return 0;
}

int isleap(int year){

    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;    
}