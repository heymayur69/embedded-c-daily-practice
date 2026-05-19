/*
2. Write a program to crate four function calculator. Four functions are +, - , *, /
*/

#include <stdio.h>

int main() {
    int choice;
    float op1, op2;
    printf("================== SIMPLE CALCULATOR ==================\n");
    printf("Enter operand 1: ");
    scanf("%f", &op1);
    printf("Enter operand 2: ");
    scanf("%f", &op2);
    
    do
    {
    
        printf(" 0. EXIT\n 1. Addition (+)\n 2. Substraction (-)\n 3. Multiplication\n 4. Divison \n");
        printf("Enter Choice: ");
        scanf("%d",&choice );

        switch (choice)
        {
        case 1 :
            printf("Addition : %.2f + %.2f: %.2f\n",op1, op2, op1 + op2);
            break;
        case 2 :
            printf("Substraction : %.2f - %.2f: %.2f \n",op1, op2, op1 - op2);
            break;
        case 3 :
            printf("Multiplication : %.2f x %.2f: %.2f\n",op1, op2, op1 * op2);
            break;
        case 4 :
            if (op2 == 0)
            {
                    printf("Cannot devide by zero!!\n");
                    
            }else
            {
                printf("Division : %.2f / %.2f: %.2f\n",op1, op2, op1 / op2);
            }
            break;  
        case 0 :
            printf("Exiting calculator byee...\n");           
            break;
        default:
        printf("Invalid choice try again\n");
            break;
        }
        
    } while (choice != 0);
    return 0;
}