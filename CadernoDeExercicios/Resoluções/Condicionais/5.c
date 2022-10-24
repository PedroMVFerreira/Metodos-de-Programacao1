/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    //Data declaration and initialization 
    int number;

    //Program intentions 
    printf("THIS PROGRAM WILL LAUNCH A COIN AND WRITE THE RESULT\n\n");

    //Random throw
    srand(time(NULL));
    number = rand();

    // Even number equals face and odd number equals crown 
    if(number % 2 == 0)
        printf("FACE\n");
    else    
        printf("CROWN\n");
}