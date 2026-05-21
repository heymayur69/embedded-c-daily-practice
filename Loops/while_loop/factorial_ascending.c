/*
4. Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120
*/

#include <stdio.h>

int main() {
    
    int num;
    printf("Input  : ");
    scanf("%d", &num);
    printf("Output : ");
    int i = 1;
    int fact = 1;
    while (i <= num)
    {
        printf("%d",i);
        if (i < num)
        {
            printf(" * ");
        }
        fact = fact * i;
        i++;
    }
    
    printf(" = %d\n",fact);
    return 0;
}