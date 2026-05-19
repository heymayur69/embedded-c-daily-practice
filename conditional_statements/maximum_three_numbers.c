/*
5. Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.
*/

#include <stdio.h>

int main() {
    
    int n1, n2, n3;
    printf("Enter Three Nums: ");
    scanf("%d%d%d", &n1,&n2,&n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("Maximum Number: %d\n", n1);
    }else if (n2 > n1 && n2 > n3)
    {
        printf("Maximum Number: %d\n",n2);
    }else
    {
        printf("Maximum Number: %d\n", n3);
    }
    
    
    
    return 0;
}