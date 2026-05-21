/*
12. Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2
index: 5
Output: 32
Input:
base: 8
index: 3
Output: 512
*/

#include <stdio.h>

int main() {
    
    int base, index;

    printf("===Input==== \n");
    printf("Base  : ");
    scanf("%d", &base);
    while(getchar() != '\n');
    printf("Index : ");
    scanf("%d", &index);

    printf("Output:");
    int res = 1;
    for (int i = 1; i <= index; i++)
    {
        res = res * base;
    }
    printf("%d\n",res);
    return 0;
}