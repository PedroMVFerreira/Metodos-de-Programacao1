/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int wage, bufferClean;
    float tax;
    char maritalStatus;

    //Program intentions 
    printf("THIS PROGRAM WILL RECEIVE A WAGE VALUE AND A MARITAL STATUS AND APPLY A DIFFRENT TAX BASED ON THE MARITAL STATUS\n\n");

    //Input 
    printf("CHOOSE YOUR MARITAL STATUS\nM -> MARRIED\nS -> SINGLE\n");
    scanf("%c", &maritalStatus);
    printf("ENTER THE WAGE VALUE\t");
    scanf("%i", &wage);

    //Calculations 
    switch(maritalStatus){
        case 'M':
            tax = wage * 0.09;
        break;
        case 'S':
            tax = wage * 0.10;
        break;
        default:
            printf("CHOOSE A VALID OPTION\n");
        break;
    }

    //Output 
    printf("BASED ON YOUR MARITAL STATUS YOU HAVE TO PAY %.2f IN TAXES\n", tax);
}