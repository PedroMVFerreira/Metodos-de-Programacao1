/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

//Function prototypes 
int symmetric(int number);

void main()
{
    //Data declaration and initialization 
    int x, functionResult;

    //Program intentions 
    printf("THIS PROGRAM WILL RECEIVE AN INTEGER X AND INVOKE A FUNCTION TO CALCULATE IS SYMMETRIC TO BE PRINT BY THE PROGRAM\n\n");

    //Input 
    printf("ENTER A NUMBER\t");
    scanf("%i", &x);

    //Invoking function
    functionResult = symmetric(x);

    printf("THE SYMMETRIC OF %i IS %i", x, functionResult);
}

/*
    Function responsable to calculate the symmetric of a given number 
*/
int symmetric(int number)
{
    //Data declaration and initialization 
    int symmetric;

    if(number > 0)
        symmetric = number - (2 * number);
    if(number < 0)
        symmetric = number + ((-2)* number);
    if(number == 0)
        symmetric = number;

    return symmetric;
}