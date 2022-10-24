/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int integer, numberOfDigits = 0;

    //Program intention 
    printf("THIS PROGRAM RECEIVES AN INTEGERS AND PRINTS THE NUMBER OF DIGITS IN THAT INTEGER\n\n");

    //Input 
    printf("ENTER THE INTEGER\t");
    scanf("%i", &integer);

    if(integer == 0)//Particular case
        numberOfDigits = 1;
    else{
        while(integer != 0){
            numberOfDigits++;
            integer = integer / 10;
        }
    }
    printf("THE INTEGER YOU ENTER HAS %i DIGITS\n", numberOfDigits);
}