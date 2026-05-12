/*
9. Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion is
*/

#include <stdio.h>

void displayMenu();
float ctof(float temp);
float ftoc(float temp);


int main() {
    
    int choice;
    
    do
    {
        displayMenu();
        printf("Enter Choice: ");
        scanf("%d",choice );

        switch (choice)
        {
        case 1:
            printf("Enter Tempreture in \n");            
            break;
        
        default:
            break;
        }
    } while (choice != 0);


    return 0;
}


void displayMenu(){

    printf("============== Tempreture Conversion Menu =====================\n");
    printf("0. Exit\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius \n");
}