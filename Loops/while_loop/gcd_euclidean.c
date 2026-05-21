/*
9. Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3
*/

#include <stdio.h>

int main() {
    
    int n1, n2;
    printf("Enter no1: ");
    scanf("%d", &n1);   
    printf("Enter no2: ");
    scanf("%d", &n2);
    int a = n1, b = n2, temp;
    printf("Output : \n");
    while (b != 0)
    {
        temp = a % b;
        if (temp != 0)
        {
            printf("%d %% %d = %d\n",a,b,temp);
        }
        
        a = b;
        b = temp;
         
    }
    printf("GCD of %d and %d is %d\n", n1, n2, a);
    
    
    return 0;
}