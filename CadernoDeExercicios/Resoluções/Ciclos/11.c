/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int numberOfIntegers, integer, index = 1, max;

    //Program intention
    printf("THIS PROGRAM WILL RECEIVE A NUMBER OF INTEGERS AND PRINT IS MAXIMUM.\nTHE NUMBER OF INTEGERS TO BE INPUT IS ALSO GIVEN BY THE USER\n\n");

    //Input 
    printf("ENTER THE NUMBER OF INTEGERS TO BE ENTER ON THE PROGRAM\t");
    scanf("%i", &numberOfIntegers);
    printf("ENTER THE %iº INTEGER ", index);
    scanf("%i", &integer);
    
    //Since the maximum value could be negative we will attribute the maximum value to the first integer inputted in to the program 
    max = integer;
    //Incrementing the index after one input 
    index++;

    for(index; index <= numberOfIntegers; index++){//Cycle 
        //Input 
        printf("ENTER THE %iº INTEGER ", index);
        scanf("%i", &integer);
        //Condition
        if(integer > max)
            //Updating maximum value to new maximum input 
            max = integer;
    }
    //Output 
    printf("THE MAXIMUM VALUE YOU ENTER IS %i\n", max);
}