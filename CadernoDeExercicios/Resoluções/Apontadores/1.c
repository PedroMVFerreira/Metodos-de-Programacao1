/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

//Function prototypes
void swap(int *numA, int * numB);

void main()
{
    //Data declaration and initialization 
    int numA, numB; 
    //Reading input 
    printf("ENTER THE FIRST NUMBER\t");
    scanf("%i", &numA);
    printf("ENTER THE SECOND NUMBER\t");
    scanf("%i", &numB);
    //Output original numbers 
    printf("\n\nORIGINAL NUMBERS\nFIRST NUMBER: %i\tSECOND NUMBER: %i\n", numA, numB);
    //Invoking the function responsible to swap the numbers around
    swap(&numA,&numB);
    //Output swap numbers 
    printf("\nSWAPPED NUMBERS\nFIRST NUMBER: %i\tSECOND NUMBER: %i\n", numA, numB);
}

void swap(int *numA, int * numB)
{
    //Data declaration and initialization 
    int temp; 
    //Changing variables 
    temp = *numA;
    *numA = *numB;
    *numB = temp;
}