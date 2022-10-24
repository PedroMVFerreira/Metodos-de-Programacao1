/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int positions;
    //Input -> asking the user for the number of positions in the array 
    printf("ENTER THE NUMBER OF POSITIONS OF THE ARRAY:\t");
    scanf("%i", &positions);
    //Data declaration and initialization
    int array[positions], index; 
    //Input -> reading the number to be store in each position of the array 
    for(index = 0; index < positions; index++){
        printf("ENTER THE NUMBER FOR THE %iº POSITION OF THE ARRAY\t", index +1);
        scanf("%i", &array[index]);
    }
    //Printing the content of the array and the memory location of each position using pointers 
    for(index = 0; index < positions; index++)
        printf("THE %iº POSITION OF THE ARRAY IS STORE IN THE MEMORY ADDRESS %p AND ITS CONTENT IS %i\n", index + 1, array + index, *(array + index));
}