/*
10. Write a program to accept a character c and display category of the input character.
ALPHABET
: c is a letter (65 to 90 or 97 to 122)
UPPERCASE
: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT
: c is a digit (48 to 57)
SPACE
: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER
: Not listed above
*/

#include <stdio.h>

int main() {
    
    char c;
    printf("Enter char: ");
    c = getchar();

    if (c >= 'A' && c <= 'Z')
    {
        printf("Character %c is : UPPER CASE LETTER\n", c);
    }else if (c >= 'a' && c <= 'z')
    {
        printf("Character %c is : Lower CASE LETTER\n", c);
    }else if (c >= '0' && c<= '9')
    {
        printf("Character %c is : DIGIT\n", c);
    }else if (c == ' ')
    {
        printf("Character %c is : SPACE\n", c);
    }else if (c == '\t')
    {
        printf("Character %c is : TAB\n", c);
    }else if (c == '\r')  
    {
        printf("Character %c is : CARRIAGE RETURN \n", c);
    }else if (c == '\n')
    {
        printf("Character %c is : NEW LINE\n", c);
    }else
    {
            printf("Character %c is : OTHER\n", c);
    }
    return 0;
}