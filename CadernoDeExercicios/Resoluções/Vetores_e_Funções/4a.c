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
    int totolotoKey[6], index;

    /*
    This program will generate 6 random number for a totoloto key, and will store it in an array of integers, whitout regrading if any of the numbers are 
    the same 
    */

    //Finding the seed, we want the generate numbers to be as different as possible each time we start the program
    srand(time(NULL));

    //Generating 6 different numbers and storing in the 6 different positions of the array of integers 
    for(index = 0; index < 6; index++){
        totolotoKey[index] = rand () % 50 + 1;
    }

    //Output 
    for(index = 0; index < 6; index++){
        printf("%i\t", totolotoKey[index]);
    }
}