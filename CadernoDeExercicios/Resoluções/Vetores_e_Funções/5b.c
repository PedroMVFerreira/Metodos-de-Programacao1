/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>
#include <math.h>

void main()
{
    //Data declaration and initialization 
    int number, numberBackup, numberToPrint, digitCounter = 0, index;
    
    //Program intention 
    printf("THIS PROGRAM WILL RECEIVE A NUMBER AND WILL RETURN A VECTOR FILLED WITH THE DIGITS OF THE GIVEN NUMBER\n\n");

    //Input 
    printf("ENTER A NUMBER\t");
    scanf("%i", &number);
    numberBackup = numberToPrint = number;

    //Finding who many digits the inputted number has 
    if(numberBackup == 0)
        digitCounter = 1;
    else{
        while(numberBackup != 0){
            digitCounter++;
            numberBackup = numberBackup / 10;
        }
    }

    //Data declaration and initialization 
    int vector[digitCounter];

    /*
    The cycle is used to iterate trough the array and also to effectuate the calculation on the power of ten 
    Its possible to 'isolate' the left most digit if we divided the original number by ten to the power of the number of digits in the number minus one, the
    process can be repeated if we subtract the isolated digit multipled to the previous power, this process is repeated until the array is completely full
    */

    for(index = 0; index < digitCounter; index++){
        vector[index] = number / (pow(10, digitCounter - 1 - index));
        number = number - vector[index] * (pow(10, digitCounter - 1 - index));
    }

    //Output 
    printf("%i IS PART INTO\t", numberToPrint);
    for(index = 0; index < digitCounter; index++)
        printf("%i\t", vector[index]);
}