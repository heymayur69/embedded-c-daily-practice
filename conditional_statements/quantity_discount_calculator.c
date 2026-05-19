/*
8. Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.
*/

#include <stdio.h>

int main() {
    
    int q, discount, unitprice = 5;
    printf("Enter Quantity: ");
    scanf("%d",&q);

    discount = (q > 50) ? 15 : (q > 30) ? 10 : 0;
    float final = (q * unitprice) * discount / 100;
    printf("============== Price Details ==============\n");
    printf("Unit price: %d\n",unitprice);
    printf("Discount: %d\n", discount);
    printf("Original Price: %d\n",q*unitprice);
    printf("Dicounted Price: %.2f\n", (q*unitprice) - final);
    
    
    return 0;
}