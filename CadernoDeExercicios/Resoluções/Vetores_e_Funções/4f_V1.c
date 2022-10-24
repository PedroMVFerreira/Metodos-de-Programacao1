/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

//version1 

#include <stdio.h>

void main()
{
    //Data declaratation and initialization 
    int array[] = {1, 2, 57, 3, 4, 5, 6 , 7 , 8, 9, 10, 22, 11, 12};
    int size = (sizeof(array) / 4), index, position = 0;
    int arrayAux[size];

/*
    A first iterate trough the original array wil ocurred when the odd numbers are picked and putted in the left most position of the auxiliary array 
    then a second iteraton trough the origin array will ocurred picking the even numbers and putting them in the right most position of the auxiliary array
    finally the content and order of the auxiliary array will be copy to the original array and this will be printed
*/
    for(index = 0; index < size; index++){
        if(array[index] % 2 != 0){
            arrayAux[position] = array[index];
            position++;
        }
    }

    for(index = 0; index < size; index++){
        if(array[index] % 2 == 0){
            arrayAux[position] = array[index];
            position++;
        }
    }

    for(index = 0; index < size; index++){
        array[index] = arrayAux[index];
        printf("%i\t", array[index]);//Output 
    }
    printf("\n");
}