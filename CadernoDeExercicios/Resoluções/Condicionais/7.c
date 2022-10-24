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

    //Program intention 
    printf("THIS PROGRAM WILL SIMULATE THE RELEASE OF A REGULAR 6-SIDED DICE\n\n");

    //Generate a random number between 
    srand(time(NULL));
    number = rand() % 6 + 1;

    //Output 
    printf("%i WAS THE NUMBER RELEASED\n", number);
}