/*
c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
*/

#include <stdio.h>

int main() {
    
    int num, rev;

    printf("Input  : ");
    scanf("%d", &num);

    int original = num;
    int i = 0;

    while (num != 0)        
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
        i++;
    }
    
    if (original == rev)
    {
            printf("Output : %d is a palindrome.\n",original);
    }else
    {
            printf("Output : %d is not a palindrome.\n",original);
    }
    
    
    return 0;
}