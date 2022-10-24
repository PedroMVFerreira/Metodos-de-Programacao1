/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int i = 1, sum = 0, number;

    //Program intention 
    printf("THIS PROGRAM WILL ASK FOR 20 NUMBERS TO THE USER AND WRITE THE TOTAL SUM IN THE SCREEN\n\n");

    while(i <= 20){//Condition 
        //Input 
        printf("ENTER THE NUMBER %i\t", i);
        scanf("%i", &number);
        //Calculation
        sum += number;
        i++;
    }
    printf("THE SUM OF THE 20 NUMBERS YOU ENTER IS %i\n", sum);//Output
}