/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int number;

    //Program intentions
    printf("THIS PROGRAM WILL RECEIVE A NUMBER AND SAY IF IT ITS POSITIVE OR NEGATIVE\n\n");

    //Input
    printf("PLEASE ENTER A NUMBER\t");
    scanf("%i", &number);

    if(number < 0)//Condition
        printf("THE NUMBER YOU ENTER IS NEGATIVE\n");//Output 
    if(number > 0)//Condition
        printf("THE NUMBER YOU ENTER IS POSITIVE\n");//Output
}