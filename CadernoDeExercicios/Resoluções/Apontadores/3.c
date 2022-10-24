/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

//Function prototypes
void minimumMaximum (int *array, int size);

//Function responsible to read the user inputs 
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
    //Invoking the function responsible to calculate the minimum and maximum of a given array
    minimumMaximum(array, positions);
}

void minimumMaximum (int *array, int size)
{
    //Data declaration and initialization 
    int index, minimum = *array, maximum = *array;
    //Going trough the array and calculating the minimum and maximum values 
    for(index = 0; index < size; index++){
        if(minimum > *(array + index)){
            minimum = *(array + index);
        }
        if(maximum < *(array + index)){
            maximum = *(array + index);
        }
    }
    //Ouput -> printing the minimum and maximum values 
    printf("THE MINIMUM OF VALUE OF THE ARRAYS IS %i AND THE MAXIMUM VALUE IS %i", minimum, maximum);
}