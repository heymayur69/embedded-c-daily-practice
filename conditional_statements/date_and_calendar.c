/*
9. Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.
*/

#include <stdio.h>

void conditional_operator(int month, int year);
void logical_operator(int month, int year);

int main() {
    int month, year;
    printf("Enter Month (1-12): ");
    scanf("%d",&month);
    if (month < 1 || month > 12)
    {
            printf("Invalid Month!!  Try again...\n");
    }
    printf("Enter Year : ");
    scanf("%d",&year);

    conditional_operator(month, year);
    logical_operator(month, year);
    
    return 0;
}

void conditional_operator(int month, int year){
    int leap;
    if (year % 400 == 0)
    {
            leap = 1;       
    }else if (year % 100 == 0)
    {
        leap = 0;
    }else if (year % 4 == 0)
    {
        leap = 1;
    }else
    {
            leap = 0;
    }
    
    int days;
    printf("Using Conditional Operators\n");
    if (month == 1)
    {
            days = 31;
    }else if (month  == 2)
    {
            days = (leap == 1) ? 29 : 28;
    }else if (month == 3)
    {
            days = 31;
    }else if (month == 4)  // April
        days = 30;
    else if (month == 5)  // May
        days = 31;
    else if (month == 6)  // June
        days = 30;
    else if (month == 7)  // July
        days = 31;
    else if (month == 8)  // August
        days = 31;
    else if (month == 9)  // September
        days = 30;
    else if (month == 10) // October
        days = 31;
    else if (month == 11) // November
        days = 30;
    else if (month == 12) // December
        days = 31;

    printf("Using if-else ladder      : Month %d, Year %d has %d days.\n", month, year, days);      
}

void logical_operator(int month, int year){

    int leap;
    leap = (year % 400 == 0) ? 1 : (year % 100 == 0) ? 0 : (year % 4 == 0) ? 1 : 0;
    
    int days;
    if (month == 2 && leap == 1)
    {
            printf("Using Logical Operator      : Month %d, Year %d has %d days.\n", month, year, 29);
    }else if (month == 2 && leap == 0)
    {
        printf("Using Logical Operator      : Month %d, Year %d has %d days.\n", month, year, 28);
    }else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Using Logical Operator      : Month %d, Year %d has %d days.\n", month, year, 30);
    }else if (month >= 1 && month <= 12)
    {
        printf("Using Logical Operator      : Month %d, Year %d has %d days.\n", month, year, 31);
    }
    
    
    
    

}