/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>
#include <stdlib.h>

/* 
    This program asks the user for the number on which the divisors are to be known and the maximum number of divisors to be printed.
    The program will check whether or not all positive integers, starting with one, are divisors of the number entered using the remainder of the division. 
    If the remainder of the division between the number entered and a divisor is zero, we are dealing with a divisor of the number that will be printed, the
    number of divisors will be reduced whenever one is found and the program will continue this process until the maximum number of dividers is reached or
    the divider itself is bigger than the inputted number by the user
*/

void main()
{
    //Data declaration and initialization 
    int numberInput, divider = 0, rest, maxNumberOfDividers, operation;

    //Input -> asking for the number witch the user wants to find its dividers and the max number of dividers  
    printf("Enter the number in question\t");
    scanf("%i", &numberInput);
    printf("Enter the maximum number of dividers\t");
    scanf("%i", &maxNumberOfDividers);

    printf("\n\nThe first %i dividers of %i are:\n", maxNumberOfDividers, numberInput);
    //Calculations 
    while(maxNumberOfDividers > 0){
        divider++;
        if(divider > numberInput)
            exit(0);
        operation = numberInput % divider; 
        if(operation == 0){
            printf("%i\t", divider);
            maxNumberOfDividers--;
        }
    }
}