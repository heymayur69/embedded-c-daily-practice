/*
7. Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Input  : ");
    scanf("%d", &n);

    int i = 1;
    printf("Output : \n");
    while (i <= n/2)
    {
        int j = n;
        while (j >= i)
        {
            if ((i * j) == n)
            {
                printf("%d * %d = %d\n", i,j,n);
            }
            j--;
        }
        i++;
    }
    
    return 0;
}