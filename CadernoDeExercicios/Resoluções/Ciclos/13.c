/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int stopNumber, index, termOne = 0, termTwo = 1, result;

    //Program intention 
    printf("THIS PROGRAM WILL PRINT N NUMBERS OF THE FIBONACCI SEQUENCE.\nN IS GIVEN BY THE USER\n\n");

    //Input 
    printf("ENTER THE VALUE OF N\t");
    scanf("%i", &stopNumber);

    for(index = 0; index < stopNumber - 1; index++){//Cycle
        //Calculations -> (Fn + 2) = (Fn + 1) + Fn
        result = termOne + termTwo;
        termOne = termTwo;
        termTwo = result;
    }
    //Output 
    printf("THE %iº NUMBER OF THE FIBONACCI SEQUENCE IS %i", stopNumber, result);
}
