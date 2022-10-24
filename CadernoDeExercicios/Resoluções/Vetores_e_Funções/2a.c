/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

//Function prototypes 
int positiveOrNegative(int n);

void main()
{
    //Data declaration and initialization 
    int number, functionResult;

    //Program intention 
    printf("THIS PROGRAM WILL RECEIVE A NUMBER AND USE A FUNCTION TO RETURN IF ITS POSITIVE OR NEGATIVE AND PRINT THE RESULT\n\n");

    //Input 
    printf("ENTER A POSITIVE OR NEGATIVE NUMBER\t");
    scanf("%i", &number);

    //Invoke function
    functionResult = positiveOrNegative(number);

    //Output 
    if(functionResult == -1)//Negative number
        printf("THE NUMBER YOU ENTER IS NEGATIVE\n");
    if(functionResult == 1)//Positive number 
        printf("THE NUMBER YOU ENTER IS POSITIVE\n");
}

/*
    This function recives an integers and returns '-1' if its negative and '1' if its positive 
*/
int positiveOrNegative(int n)
{
    if(n < 0)
        return -1;
    if(n > 0)
        return 1;
}