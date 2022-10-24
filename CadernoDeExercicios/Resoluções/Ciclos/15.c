/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int firstNumber, secondNumber, firstBackup, secondBackup;

    //Program intentions
    printf("THIS PROGRAM WILL RECEIVE TWO NUMBERS AND PRINT THE GREATEST COMMOM DIVISOR\n\n");

    //Input 
    printf("ENTER THE FIRST NUMBER\t");
    scanf("%i", &firstNumber);
    firstBackup = firstNumber;
    printf("ENTER THE SECOND NUMBER\t");
    scanf("%i", &secondNumber);
    secondBackup = secondNumber;

    while(firstNumber != secondNumber){//Cycle
        if(firstNumber > secondNumber)
            firstNumber = firstNumber - secondNumber;
        else 
            secondNumber = secondNumber - firstNumber;
    }
    //Output 
    printf("THE GREATEST COMMOM DIVISOR BETWEEN %i AND %i IS %i\n", firstBackup, secondBackup, firstNumber);
}