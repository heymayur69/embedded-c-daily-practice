/*
3.
Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20

*/

#include <stdio.h>

int main() {
    
    int sum;
    char num_string[100];


    printf("Enter Number: ");
    scanf("%s", num_string);

    printf("Output: ");
    int i = 0;
    while (num_string[i] != '\0')
    {
        int digit = num_string[i] - '0';
        printf("%d", digit);
        sum += digit;

        if (num_string[i + 1] != '\0')
        {
            printf(" + ");
        }
        i++;
    }
    printf(": %d\n",sum);
    printf("\n");
    
    return 0;
}