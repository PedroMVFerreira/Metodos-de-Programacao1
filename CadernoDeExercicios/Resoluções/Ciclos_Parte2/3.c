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
    int dado1, dado2, dado3, dado4, dado5, attempts = 0;

    //Program intention 
    printf("THIS PROGRAM WILL LAUNCH FIVE DADOS UNTIL THEY ALL HAVE THE SAME VALUE\nPRINTING THE NUMBER OFF TRIES NECESSARY FOR THAT TO OCCURRED\n\n");

    //Random numbers -> feeding the seed
    srand(time(NULL));

    while(dado1 != dado2 || dado1 != dado3 || dado1 != dado4 || dado1 != dado5){
        // Launching the 5 dados
        dado1 = rand () % 6 + 1;
        dado2 = rand () % 6 + 1;
        dado3 = rand () % 6 + 1;
        dado4 = rand () % 6 + 1;
        dado5 = rand () % 6 + 1;
        //Incresing the number of attempts 
        attempts++;
    }
    //Output 
    printf("%i ATTEMPTS WERE NECESSARY TO HAVE ALL THE FIVE DADOS WITH THE SAME VALUE\n\n", attempts);
    printf("DADO 1 -> %i\nDADO 2 -> %i\nDADO 3 -> %i\nDADO 4 -> %i\nDADO 5 -> %i\n", dado1, dado2, dado3, dado4, dado5);
}