/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int number, result, i;

    //Program intention 
    printf("THIS PROGRAM WILL RECEIVE A NUMBER AND THEN PRINT THE RESPECTIVE TABLES\n\n");

    //Input 
    printf("ENTER THE NUMBER TO BE TABLE\t");
    scanf("%i", &number);

    for(i = 1; i <= 10; i++){//Condition 
        result = number * i;//Calculations 
        printf("%i * %i = %i\n", number, i, result);//Output  
    }
}