/*
13. Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Input  : ");
    scanf("%d", &n);

    printf("Output : ");
    int a = 1, b = 1;
    printf(" %d, %d", a, b);

    for (int i = 1; i < n-1; i++)
    {
        int temp = a + b;
        printf(", %d",temp);
        a = b;
        b = temp; 
    }
    printf("\n");
    return 0;
}