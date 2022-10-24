/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int firstNumber, secondNumber, result;

    //Program intention 
    printf("THIS PROGRAM WILL MULTIPLY TWO NUMBERS\n\n");

    //Input 
    printf("ENTER THE FIRST NUMBER\t");
    scanf("%i", &firstNumber);
    printf("ENTER THE SECOND NUMBER\t");
    scanf("%i", &secondNumber);

    //Calculations
    result = firstNumber * secondNumber;

    //Output
    printf("%i TIMES %i EQUALS %i\n", firstNumber, secondNumber, result);
}