/*
1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.
*/

#include <stdio.h>


int main() {
    
    signed char sc1 = 10, sc2 = 20;
    unsigned char uc1 = 10, uc2 = 20;

    signed int si1 = 100, si2 = 50;
    unsigned int ui1 = 100, ui2 = 50;

    signed long int sli1 = 1000, sli2 = 500;
    unsigned long int uli1 = 1000, uli2 = 500;


    printf("Signed char operations\n");
    printf("Sum : %d\n", sc1 + sc2);
    printf("diff : %d\n", sc1 - sc2);
    printf("Product : %d\n", sc1 * sc2);
 
 
    printf("Unsigned char operations\n");
    printf("Sum : %d\n", uc1 + uc2);
    printf("diff : %d\n", uc1 - uc2);
    printf("Product : %d\n", uc1 * uc2);
 
 
    printf("Signed Int operations\n");
    printf("Sum : %d\n", si1 + si2);
    printf("diff : %d\n", si1 - si2);
    printf("Product : %d\n", si1 * si2);
 
    printf("Unsigned Int operations\n");
    printf("Sum : %u\n", ui1 + ui2);
    printf("diff : %u\n", ui1 - ui2);
    printf("Product : %u\n", ui1 * ui2);
 
 
    printf("Signed Long operations\n");
    printf("Sum : %ld\n", sli1 + sli2);
    printf("diff : %ld\n", sli1 - sli2);
    printf("Product : %ld\n", sli1 * sli2);
 
    printf("Unsigned Long operations\n");
    printf("Sum : %lu\n", uli1 + uli2);
    printf("diff : %lu\n", uli1 - uli2);
    printf("Product : %lu\n", uli1 * uli2);
 
 
    return 0;
}