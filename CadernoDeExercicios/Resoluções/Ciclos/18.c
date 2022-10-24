/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization
    int firstNumber, secondNumber, sum, index;
    sum = 0;
    index = 1;

    //Program intentions 
    printf("THIS PROGRAM WILL RECEIVE 30 NUMBERS AND PRINT THEIR SUM\nIT IS NOT POSSIBLE TO PLACE TWO EQUAL NUMBERS IN A FOLLOW\n\n");

    //Input 
    printf("ENTER THE %iº NUMBER ", index);
    scanf("%i", &firstNumber);
    sum += firstNumber;
    index++;

    for(index; index <= 30; index++){//Cycle
        //Input 
        printf("ENTER THE %iº NUMBER ", index);
        scanf("%i", &secondNumber);
        //Condition
        if(firstNumber != secondNumber){
            firstNumber = secondNumber;
            sum += secondNumber;
        }
        else{
            printf("YOU CANNOT ENTER TWO EQUAL NUMBERS\n");
            index--;
        }
    }

    printf("\nTHE TOTAL SUM IS %i\n", sum);
}