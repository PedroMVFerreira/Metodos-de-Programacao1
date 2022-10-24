/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    char firstLetter, lastLetter;
    int index, bufferClean;

    //Program intentions
    printf("THIS PROGRAM WILL PRINT THE LETTERS BETWEEN TWO GIVEN LETTERS\n\n");

    //Input 
    printf("ENTER THE FIRST LETTER\t");
    scanf("%c", &firstLetter);
    //Buffer cleaning -> discarting the newLine input 
    while(bufferClean != '\n')
        bufferClean = fgetc(stdin);

    printf("ENTER THE LAST LETTER\t");
    scanf("%c", &lastLetter);

    for(index = firstLetter + 1; index < lastLetter; index++){//Cycle
        printf("%c\t", index);//Output 
    }
    printf("\n");
}