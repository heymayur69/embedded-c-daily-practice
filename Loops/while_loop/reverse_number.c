/*
3.
b. Reverse the number
Input: 9362
Output: 2639
*/

#include <stdio.h>

int main() {
    int num;
    char rev[100];

    printf("Input : ");
    scanf("%d", &num);
    printf("Output: ");
    int i = 0;
    while (num != 0)
    {
        rev[i] = num % 10;
        printf("%d", rev[i]);  
        num = num / 10;
        i++;
    }
    printf("\n");
    return 0;
}