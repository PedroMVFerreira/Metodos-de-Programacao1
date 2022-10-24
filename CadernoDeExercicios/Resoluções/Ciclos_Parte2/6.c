/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int number, factorial;

    //Program intention 
    printf("THIS PROGRAM WILL CALCULATE THE FACTORIAL OF A GIVEN NUMBER\n\n");

    //Input 
    printf("ENTER THE NUMBER\t");
    scanf("%i", &number);

    for(factorial = 1; number > 1; number--){//Cycle 
        factorial = factorial * number;//Calculations 
    }
    printf("%i FACTORIAL IS %i\n", number, factorial);
}