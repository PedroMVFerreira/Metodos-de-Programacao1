/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int vector[10] = {43, 76, 20, 98, 65, 21, 54, 32, 87, 38};
    int index1, index2, aux;

    //Program intentions 
    printf("THIS PROGRAM SORTS A PRE DEFINED ARRAY IN ASCENDING ORDER\n\n");

    /*
    The program will loop trough the array with two different cycles the first in x position and the second in the position x + 1; the loops are set in a way 
    that if a bigger number is found in the left of a smaller number they are swapped, sorting in that manner the array in ascending order 
    */

    for(index1 = 0; index1 < 10; index1++){
        for(index2 = index1 + 1; index2 < 10; index2++){
            if(vector[index1] > vector[index2]){
                aux = vector[index1];
                vector[index1] = vector[index2];
                vector[index2] = aux;
            }
        }
    }

    //Output 
    for(index1 = 0; index1 < 10; index1++)
        printf("%i\t", vector[index1]);
}