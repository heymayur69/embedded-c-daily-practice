/*
2.Write a program to accept a number and print the number in character, decimal, octal and hex formats.
*/

#include <stdio.h>

int main() {
    
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Number in char: %c\n", num);
    printf("Number in decimal: %d\n",num);
    printf("Number in Octal: %o\n",num);
    printf("Number in Hexadecimal: %x\n",num);
    printf("Number in Hexadecimal (capital): %X\n",num);
    return 0;
}