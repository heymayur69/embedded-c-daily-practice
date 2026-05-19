/*
7. Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values

a. 9      3       6     1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639
*/


#include <stdio.h>



int main() {
    
    int n;

    printf("Enter a 4-digit Number: ");
    scanf("%d", &n);

    if (n < 1000 || n >9999)
    {
        printf("Invalid input! try again... \n");
        return 1;

    }
    
    int n1, n2, n3, n4;

    n1 = (n / 1000)%10 ;
    n2 = (n / 100) %10;
    n3 = (n / 10) %10;
    n4 = n % 10;

   

    printf("Face values: %d, %d, %d, %d\n", n1, n2, n3, n4);
    printf("Place values: %d, %d, %d, %d\n", n1*1000, n2*100, n3*10, n4);
    printf("Reversed Number: %2d%2d%2d%2d\n", n4, n3, n2, n1);
    return 0;
}