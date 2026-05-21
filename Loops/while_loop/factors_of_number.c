/*
6. Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/

#include <stdio.h>

int main() {
    int n;
    printf("Input  : ");
    scanf("%d", &n);

    printf("Output : all factors: ");
    int i = 1;
    while (i <= n/2)
    {
        if (n % i == 0)
        {
                printf(" %d",i);
                if (i < n / 2)
                {
                    printf(",");
                }
                
        }
        i++;
    }
    printf("\n");
    return 0;
}