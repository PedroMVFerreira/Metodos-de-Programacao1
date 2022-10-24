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
    int index, tK[6];//tK stands for totolotoKey

    //Program intention
    printf("THIS PROGRAM WILL GENERATE A RANDOM TOTOLOTO KEY AND ALL THE NUMBERS IN THE KEY ARE DIFFERENT\n\n");

    //Feeding the seed for the random number, ensuring that the number is as different as possible each time we start the program 
    srand(time(NULL));

    do{//Condition -> the umbers in the key cannot be equal to one and other 
        for(index = 0; index < 6; index++)//Cycle to iterate trough the array 
            tK[index] = rand () % 50 + 1;//Generating a random number and put it in the array 
    }while(tK[0] == tK[1] || tK[0] == tK[2] || tK[0] == tK[3] || tK[0] == tK[4] || tK[0] == tK[5] || tK[0] == tK[6]);

    //Output 
    for(index = 0; index < 6; index++)
        printf("%i\t", tK[index]);
}  