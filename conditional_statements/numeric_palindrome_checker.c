/*
6. Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).
*/

#include <stdio.h>

int main() {
    
    int num;
    printf("Enter 5 digit Num: ");
    scanf("%d", &num);

    if (num < 9999 || num > 99999)
    {
            printf("Invalid Input !!\n");
            return -1;
    }
    
    int n1, n2, n3, n4, n5;
    n1 = (num / 10000) % 10;
    n2 = (num / 1000) % 10;
    n3 = (num / 100) % 10;
    n4 = (num / 10) % 10;
    n5 = num % 10;

    int reversed = n5*10000 + n4*1000 + n3*100 + n2*10 + n1;
    printf("Reversed: %d%d%d%d%d\n",n5,n4,n3,n2,n1);
    if (num == reversed)
    {
        printf("Number is palindrom!!\n");
    }else
    {
        printf("Number is not palindrome!!\n");
    }
    
    

    printf("%d%d%d%d%d\n",n1,n2,n3,n4,n5);
    return 0;
}