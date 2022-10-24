/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int firstNumber, secondNumber;

    //Program intentions 
    printf("THIS PROGRAM WILL RECEIVE TWO NUMBERS AND WILL WRITE THEN IN ASCENDING ORDER\n\n");

    //Input 
    printf("PLEASE ENTER THE FIRST NUMBER\t");
    scanf("%i", &firstNumber);
    printf("PLEASE ENTER THE SECOND NUMBER\t");
    scanf("%i", &secondNumber);

    if(firstNumber < secondNumber)//Condition 
        printf("%i SMALLER THEN %i\n", firstNumber, secondNumber);//Output
    else//Condition
        printf("%i SMALLER THEN %i\n", secondNumber, firstNumber);//Output
}