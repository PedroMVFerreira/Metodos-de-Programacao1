/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

//Function prototypes 
void printingNextCaracthers(char c, int n);

void main()
{
    //Data declaration and initialization 
    char caracther;
    int number;

    //Program intention 
    printf("THIS PROGRAM WILL RECEIVE A CARACTHER AND A NUMBER AND INVOKE A FUNCTION TO PRINT THE FOLLOWING N(NUMBER) OF CARACTHERS IN THE ASCII TABLE\n\n");

    //Input 
    printf("ENTER THE CARACTHER\t");
    scanf("%c", &caracther);
    printf("ENTER THE NUMBER\t");
    scanf("%i", &number);

    //Invoking function 
    printingNextCaracthers(caracther, number);
}

/*
    This function printed the next n (n is given by the user) of a given caracther (also by the user )
*/

void printingNextCaracthers(char c, int n)
{
    //Data declaration and initialization 
    int index;

    for(index = 0; index < n; index++){//Cycle 
        printf("%c\t", c+1+index);//Output 
    }
}