/*
2. Input a number and display whether number is Even or Odd.
*/
#include <stdio.h>

int main() {

    int n;
    printf("Enter Num: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
            printf("Number: %d is Even!!\n",n);

    }else
    {
            printf("Number: %d is Odd!!\n",n);
    }
    
    
    return 0;
}