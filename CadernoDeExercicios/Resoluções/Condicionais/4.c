/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int wage;
    float tax;

    //Program intentions 
    printf("THIS PROGRAM WILL CALCULATE THE TAX DUE BASED ON A SALARY\n\n");

    //Input 
    printf("PLEASE ENTER YOUR SALARY\t");
    scanf("%i", &wage);

    //Calculations 
    if(wage < 0)//Conditions 
        printf("PLEASE ENTER A VALID VALUE FOR YOUR WAGE\n");//Output 
    if(wage > 0 && wage < 1000)//Conditions 
        tax = wage * 0.05; 
    if(wage > 1000)//Conditions 
        tax = wage * 0.10;
    
    //Outputs 
    printf("BASED ON YOUR SALARY %i YOU OWNED %.2f\n", wage, tax);
}