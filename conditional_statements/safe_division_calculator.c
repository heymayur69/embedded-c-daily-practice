/*
1. Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.
*/

#include <stdio.h>

int main() {
    
    int a, b;
    printf("Enter Num 1: ");
    scanf("%d", &a);
    printf("Enter Num 2: ");
    scanf("%d", &b);
    if (b <= 0)
    {
            printf("Cannot divide by zero !! try again...\n");
            return -1;
    }else
    {
            printf("========= DIVISON =========\n");
            printf("Quotient: %d\n", a/b);
            printf("Reminder: %d\n", a%b); 
    }
    
    
    return 0;
}