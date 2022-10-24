/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    char maritalStatusLetter;

    //Program intention 
    printf("THIS PROGRAM WILL WRITE THE FULL MARITAL STATUS GIVEN A CHOOSEN LETTER\n\n");

    /*
    M -> MARRIED
    S -> SINGLE
    D -> DIVORCED
    */

    //Input 
    printf("CHOOSE THE FIRST LETTER OF YOUR MARITAL STATUS\t");
    scanf("%c", &maritalStatusLetter);

    switch(maritalStatusLetter){//Condition 
        case 'M'://Condition married
            printf("MARRIED\n");//Output 
        break;
        case 'S'://Condintion single
            printf("SINGLE\n");//Output 
        break;
        case 'D'://Condition divorced
            printf("DIVORCED\n");//Output 
        break;
        default:
            printf("PLEASE CHOOSE A VALID OPTION\n");//Output 
        break;
    }
}