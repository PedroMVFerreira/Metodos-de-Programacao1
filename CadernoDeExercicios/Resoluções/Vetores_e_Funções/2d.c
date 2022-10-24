/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

//Function prototypes 
int factorialFunction(int number);

void main()
{
    //Data declaration and initialization 
    int x, functionResult;

    //Program intention
    printf("THIS PROGRAM WILL RECEIVE A NUMBER AND INVOKE A FUNCTION TO CALCUTE IS FACTORIAL\n\n");

    //Input 
    printf("ENTER A NUMBER\t");
    scanf("%i", &x);

    //Invoking function
    functionResult = factorialFunction(x);

    //Output 
    printf("THE FACTORIAL OF %i IS %i\n", x, functionResult);
}

//Function to calculate the factorial of a given number 
int factorialFunction(int number)
{
    //Data declaration and initialization 
    int factorial; 

    for(factorial = 1; number > 1; number--){//Cycle 
        factorial = factorial * number;//Calculations 
    }

    //Return the result 
    return factorial;
}