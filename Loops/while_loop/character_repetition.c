/*
1.
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/

#include <stdio.h>

int main() {
    
    int num;
    char ch;

    printf("Enter character: ");
    ch = getchar();

    printf("Enter Number: ");
    scanf("%d",&num);

    int i = 0;
    printf("Output: ");
    while (i < num)
    {
        printf("%c", ch);
        i++;
    }
    printf("\n");
    return 0;
}