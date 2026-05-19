/*
4. Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.
*/
#include <stdio.h>

int main() {
    
    int n1, n2;

    printf("Enter Num 1: ");
    scanf("%d", &n1);
    printf("Enter Num 2: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
            printf("Maximum Number: %d\n",n1);

    }else
    {
            printf("Maximum Number: %d\n",n2);
    }
    
    
    return 0;
}