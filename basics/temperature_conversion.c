/*
9. Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion is
*/

#include <stdio.h>
#include<stdlib.h>

void displayMenu();
void ctof(float temp);
void ftoc(float temp);


int main() {
    
    int choice;
    
    do
    {
        displayMenu();
        printf("Enter Choice: ");
        scanf("%d",&choice );

        switch (choice)
        {
        case 0:
            printf("Exiting.....\n");
            exit(0);
            break;    
        case 1:
            float temp1;
            printf("Enter Tempreture in Celsius: ");            
            scanf("%f", &temp1);
            while(getchar() != '\n');
            ctof(temp1);
            break;
        case 2: 
            float temp2;
            printf("Enter tempreture in Fahrenheit: ");
            scanf("%f",&temp2);
            while(getchar() != '\n');
            ftoc(temp2);
            break;
        default:
        printf("Invalid input ! try agai...\n");
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

void ctof(float temp){
    printf("Tempreture in Fahrenheit: %.2f°f\n",(temp*9/5) + 32);
}
void ftoc(float temp){
    printf("Tempreture in Celcius: %.2f°C\n",(5.0/9)* (temp - 32));
}