/*
8. Write a program to accept three integer numbers and find its average.
*/

#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    int sum = a+ b+ c;
    float avg = sum/3.0;

    printf("Average: %.2f\n", avg);
    return 0;
}