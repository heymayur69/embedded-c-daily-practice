/*
3. Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/

#include <stdio.h>

int main()
{

    char ch;
    int num;
    printf("Enter a character: ");
    scanf("%c", &ch);
    while(getchar() != '\n');
    printf("Enter ASCII valuse: ");
    scanf("%d", &num);

    printf("ASCII in decimal: %d\n", ch);
    printf("ASCII in Octal: %o\n", ch);
    printf("ASCII in Hexadecimal: %x\n", ch);

    printf("ASCII in char: %c\n", num);

    return 0;
}