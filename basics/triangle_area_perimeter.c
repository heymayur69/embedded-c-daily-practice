/*
10. Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + c
Area = 
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.
*/

#include <stdio.h>
#include <math.h>


int main() {
    
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (!(a + b > c) && (b + c > a) && (a + c > b)) {
        printf("Invalid triangle! Sum of any two sides must be greater than third side.\n");
        return 1;
    }

    float perimeter = a + b + c;
    float s = perimeter / 2;
    float area = sqrt(s*(s - a)*(s - b)*(s - c) );
    printf("Area of the triangle: %.2f\n", area);
    printf("Perimeter of triangle: %.2f\n",perimeter);
    return 0;
}