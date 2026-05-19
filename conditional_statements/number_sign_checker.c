/*
3. Write a program to accept number and check whether the number is +ve, -ve and zero.
*/

#include <stdio.h>

int main() {
    
    int n;
    printf("Enter Num: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Number: %d is Positive !!\n",n);
    }else if (n < 0)
    {
            printf("Number: %d is Negative !!\n",n);
    }else
    {
            printf("Number: %d is Zero !!\n",n);
    }
    
    
    
    return 0;
}