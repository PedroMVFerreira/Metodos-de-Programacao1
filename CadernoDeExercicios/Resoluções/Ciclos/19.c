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
    int toGuess, try, plays = 0;

    //Program intention 
    printf("THIS PROGRAM IMPLEMENTS THE HI-LO GAME\nTHE OBJECTIVE IS TO GUESS THE HIDDEN NUMBER IN THE FEWEST ATTEMPTS POSSIBLE\n");

    //Generating a random number 
    srand(time(NULL));
    toGuess = rand () % 100;

    printf("TEST %i\n", toGuess);

    do{//Cycle 
        //Input 
        printf("ENTER YOUR ATTEMP\t");
        scanf("%i", &try);
        if(try < toGuess)
            printf("TRY A HIGHER NUMBER\n");
        if(try > toGuess)
            printf("TRY A SMALL NUMBER\n");
        plays++;
    }while(try != toGuess);

    printf("CONGRATULATION YOU TAKE %i GUESSES TO REVEAL THE HIDDEN NUMBER\n", plays);
}