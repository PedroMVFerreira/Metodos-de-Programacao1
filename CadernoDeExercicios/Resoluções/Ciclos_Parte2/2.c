/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int number, calculus, index, index2, auxiliary;

    //Program intention 
    printf("THIS PROGRAM WILL RECEIVE A NUMBER AND PRINT ALL THE PERFECT NUMBERS SMALLER THAN THE INPUT NUMBER\n\n");

    //Input 
    printf("ENTER THE NUMBER\t");
    scanf("%i", &number);

    for(index = 0; index < number; index++){                //Cycle to decrease the number to be calcute if its perfect or not 
        calculus = number - (1 + index);
        auxiliary = 0;
        if(calculus != 0){
            for(index2 = 1; index2 < calculus; index2++){      //Cycle to see if the number is perfect 
                if(calculus % index2 == 0){                    //Calculation the divisors of the calculated number;
                    auxiliary += index2;                       //Summing the divisor to an auxiliary variable 
                }
            }
            if(auxiliary == calculus){                         //If the auxiliary variable were equal to the calculated number the number is a perfect number 
                //Output 
                printf("%i\t", calculus);
            }
        }
    }
    printf("\n");
}