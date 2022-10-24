/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int i, result;

    //Program intention 
    printf("THIS PROGRAM WILL WRITE THE FIRST 20 MULTIPLE OF 3 IN THE SCREEN\n\n");

    do{
        result = 3 * i;//Calculations
        printf("3 * %i = %i\n", i, result);//Output
        i++;
    }while(i <= 20);//Condition
}