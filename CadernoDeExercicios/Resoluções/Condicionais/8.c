/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int wage, loan;

    //Program intentions 
    printf("THIS PROGRAM RECEIVES A WAGE AND AN INTENDED LOAN AN WILL AUTORISE THE LOAN IF IT'S LESS THAN 20 PERCENT OF THE WAGE\n\n");

    //Input 
    printf("ENTER THE WAGE VALUE\t");
    scanf("%i", &wage);
    printf("ENTER THE LOAN VALUE\t");
    scanf("%i", &loan);

    if(loan > (wage * 0.20))//Calculations
        printf("LOAN CANNOT BE GRANTED\n");//Output 
    else
        printf("LOAN CAN BE GRANTED\n");//Output 
}