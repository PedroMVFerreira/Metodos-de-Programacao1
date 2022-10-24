/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int number, numberOfPairs = -1;
    //The numberOfPairs start with -1 beacause 0 is consider a pair number but we can not count it 

    //Program intentions 
    printf("THIS PROGRAM WILL RECEIVE A NUMBER OF INTEGERS AND PRESENT THE NUMBER OF PAIR NUMBERS\nTHE PROGRAM ENDS WITH THE ENTER OF A 0\n\n");

    do{//Condition beggin 
        //Input 
        printf("ENTER A NUMBER\t");
        scanf("%i", &number);
        if(number % 2 == 0)//Checking for pair numbers 
            numberOfPairs++;//incresing counter if the above condition is true 
    }while(number != 0);//Condition end

    printf("YOU ENTER A TOTAL OF %i PAIR NUMBERS\n", numberOfPairs);
}