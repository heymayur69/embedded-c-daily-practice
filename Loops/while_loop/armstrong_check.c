/*
d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number
*/

#include <stdio.h>

int main() {
    
    int num;
    int arm = 0;

    printf("Input  : ");
    scanf("%d", &num);

int original = num;

    int i = 0;
    while (num != 0)
    {
        int digit = num % 10 ;
        arm = arm + (digit * digit * digit);
        num = num / 10;
        i++;
    }
    if (arm == original)
    {
            printf("Output : %d is an Armstrong number.\n",original);
    }else
    {
            printf("Output : %d is not an Armstrong number.\n",original);
    }
    
    
    
    return 0;
}