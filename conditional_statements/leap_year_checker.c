/*
7. Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/

#include <stdio.h>

void  without_logical_operator(int year);
void  logical_operator(int year);
void  conditional__operator(int year);

int main() {
    
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    
    without_logical_operator(year);
    logical_operator(year);
    conditional__operator(year);

    
    return 0;
}


void  without_logical_operator(int year){
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
    
    printf("Without Using Logical Operator \n");
    if ( leap == 1)
    {
            printf("%d is a leap year!\n",year );
    }else
    {
        printf("%d is a not a leap year!\n",year);
    }
}
void  logical_operator(int year){
    printf("Using logical Operators\n");

    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0 )
    {
         printf("%d is a leap year!\n",year );
    }else
    {
            printf("%d is a not a leap year!\n",year);
    }
    
    
}
void  conditional__operator(int year){
    int leap;
    printf("Using Conditional Operators\n");
    
    leap = (year % 400 == 0) ? 1 : (year % 100 == 0) ? 0 : (year % 4 == 0) ? 1 : 0;

    if (leap == 1)
    {
            printf("%d is a leap year!\n",year );
    }else
    {
            printf("%d is a not a leap year!\n",year);
    }
    
    
}
