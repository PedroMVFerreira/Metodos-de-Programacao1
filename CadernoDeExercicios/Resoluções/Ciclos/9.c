/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int number, sum = 0;

    //Program intentions
    printf("THIS PROGRAM WILL REVIVE TEN INTEGERS AND PRINT THERE SUM\n\n");

    for(int i = 1; i <= 10; i++){//Condition
        //Input 
        printf("ENTER %iº NUMBER ", i);
        scanf("%i", &number);
        //Calculations 
        sum +=number;
    }
    //Output 
    printf("THE SUM OF THE TEN INTEGERS YOU ENTER IS %i\n", sum);
}