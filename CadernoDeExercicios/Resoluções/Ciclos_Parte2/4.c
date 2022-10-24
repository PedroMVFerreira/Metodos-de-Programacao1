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
    int number1, number2, number3, number4, number5, number6, newKey;

    //Program intentions 
    printf("THIS PROGRAM WILL GENRATE RANDOM TOTOLOTO KEYS UNTIL THE USER IS SATISFY\n\n");

    //Random number -> feeding the seed 
    srand(time(NULL));

    do{
        //Restarting the numbers of the key 
        number1 = number2 = number3 = number4 = number5 = number6 = 0;
        //Generate random numbers -> the numbers must all be different 
        while(number1 == number2 || number1 == number3 || number1 == number4 || number1 == number5 || number1 == number6){
            number1 = rand () % 50 + 1;
            number2 = rand () % 50 + 1;
            number3 = rand () % 50 + 1;
            number4 = rand () % 50 + 1;
            number5 = rand () % 50 + 1;
            number6 = rand () % 50 + 1;
        }
        //Output 
        printf("YOUR GENERATE TOTOLOTO KEY IS\t\t");
        printf("%i %i %i %i %i %i\n\n", number1, number2, number3, number4, number5, number6);
        //Input -> emiting a new totoloto key 
        printf("DO YOU WANT A NEW KEY TO BE GENERATE\n");
        printf("1. YES\n2. NO\n");
        scanf("%i", &newKey);
    }while(newKey == 1);
}