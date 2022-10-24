/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

//Function prototypes 
char *reverseArray(char *array);

#include <stdio.h>
#include <string.h>

//Main function -> responsible to read the array and to invoke the function reverseArray
void main()
{
    //Data declaration and initialization 
    char array[] = {'A', '#', 'B', 'C', '/', '?', '"', ')'};
    size_t size;
    int index;

    size = strlen(array);//Finding the size of the array 

    //Printing the original array
    for(index = 0; index < size; index++)
        printf("%c\t" , array[index]);
    printf("\n\n");

    reverseArray(array);//Invoking the function responsible to reverse the array 

    //Printing the reversed array 
    for(index = 0; index < size; index++)
        printf("%c\t" , array[index]);
    printf("\n\n");
}

//Function responsible for inverting the order of an array
char *reverseArray(char *array) 
{
    //Data declaration and initialization 
    size_t size; 
    int index;
    char temp;

    size = strlen(array);//Finding the size of the array 

    /*The cycle will traverse the array to its half, exchanging the content of the leftmost position with the content of the rightmost position 
    until reaching the central position of the same.*/
    for(index = 0; index < size / 2; index++){
        temp = array[index];
        array[index] = array[size - 1 - index]; 
        array[size - 1 - index] = temp;
    }
}