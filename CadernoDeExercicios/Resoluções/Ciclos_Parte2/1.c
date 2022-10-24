/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    //Data declaration and initialization 
    int numberOfNumbers, number1, number2, number3, index = 0;

    //Input 
    printf("ENTER THE NUMBER OF NUMBERS TO BE PRINT\t");
    scanf("%i", &numberOfNumbers);
    printf("%i\n", numberOfNumbers);

    //Data declaration 
    int arrayOfNumbers[numberOfNumbers];
    srand(time(NULL));

    //First number 
    number1 = rand () % 10;           //Generating a random number 
    arrayOfNumbers[index] = number1;    //Insertion on to the array of numbers 
    index++;                            //Incrementing the index after a valid  insertion 


    //Second number 
    do{//Cycle
        number2 = rand () % 10;             //Generating a random number 
        arrayOfNumbers[index] = number2;    //Insertion on to the array of numbers
    }while(number2 == number1);//Condition to end cycle 
    index++;                                //Incrementing the index after a valid  insertion 

    for(index; index < numberOfNumbers; index++){    //Cycle -> inserting 3rd number and above 
        do{                                         //Cycle             
            number3 = rand () % 10;                 //Generating a random number
        }while(number3 == number2 || number3 == number1);   //Condition to stop the cycle 
        arrayOfNumbers[index] = number3;
        number1 = number2;
        number2 = number3;
    }

    printf("ARRAY OF NUMBERS\t\t");
    for(index = 0; index < numberOfNumbers; index++)
        printf("%i\t", arrayOfNumbers[index]);
    printf("\n");
}