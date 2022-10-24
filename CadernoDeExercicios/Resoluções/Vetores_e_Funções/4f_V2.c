/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

//version2

#include <stdio.h>

void main()
{
    //Data declaratation and initialization 
    int array[] = {1, 2, 3, 4, 5, 6 , 7 , 8, 9, 10, 11, 12};
    int size = (sizeof(array) / 4), index1, index2, aux;

    /*
    This program will make two iterations trough the array the first one starting in the first position and looking for numbers to be moved(even numbers)
    and the second iteration will always be one position in front of the first iteration looking for a place where this number could go.
    Even number will switch with an odd number
    The arranged array will be printed 
    */

    for(index1 = 0; index1 < size; index1++){
        for(index2 = index1 + 1; index2 < size; index2++){
            if(array[index1] % 2 == 0 && array[index2] % 2 != 0){
                aux = array[index1];
                array[index1] = array[index2];
                array[index2] = aux;
            }
        }
    }

    //Output 
    for(index1 = 0; index1 < size; index1++)
        printf("%i\t", array[index1]);
}