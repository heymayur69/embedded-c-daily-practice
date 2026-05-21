/*
8. Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Input  : ");
    scanf("%d", &n);
    int original = n;
    int i = 2;
    printf("Output : ");
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d",i);
            n = n / i;
            if (n != 1)
                 printf(" * ");
        }else
            i++; 
    }
     
    printf("\n");
    return 0;
}