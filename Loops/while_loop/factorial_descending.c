/*
5. Write a program to find factorial of given number.Input: 5
Output: 5 * 4 * 3 * 2 * 1 = 120
*/

#include <stdio.h>

int main() {
    
    int num, i;
    int fact = 1;

    printf("Input  :");
    scanf("%d", &num);
    
    i = num;
    printf("Output : ");

    while (i > 0)
    {
        printf("%d",i);

        if (i != 1)
        {
            printf(" * ");
        }
        fact = fact * i;
        i--;
    }
    
    printf(" = %d\n",fact);
    return 0;
}