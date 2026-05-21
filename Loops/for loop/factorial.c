/*
11. Write a program to find factorial of given number.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Input  : ");
    scanf("%d", &n);

    printf("Factorial: ");
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n",fact);
    
    return 0;
}