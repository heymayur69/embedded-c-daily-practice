/*
10. Write a program to print table of given number.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Input : ");
    scanf("%d", &n);
    printf("Outpur : \n");
    for (int i = 1; i <= 10; i++)
    {
        int res = i * n;
        printf("%d X %d = %d\n",n,i,res);
    }
    
    return 0;
}