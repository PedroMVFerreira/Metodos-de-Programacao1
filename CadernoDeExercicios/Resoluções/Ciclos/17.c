/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int firstNumber, firstNumberBackup, secondNumber, secondNumberBackup, rest, lcm;  // lcm stands for Least commom multiple

    //Program intentions 
    printf("THIS PROGRAM WILL CALCULATE THE LEAST COMMOM MULTIPLE BETWEEN TWO NUMBERS\n\n");

    //Input 
    printf("ENTER THE 1º NUMBER\t");
    scanf("%i", &firstNumber);
    firstNumberBackup = firstNumber;
    printf("ENTER THE 2º NUMBER\t");
    scanf("%i", &secondNumber);
    secondNumberBackup = secondNumber;

    do{//Cycle
        //Calculations 
        rest = firstNumber % secondNumber;
        //New attributions 
        firstNumber = secondNumber;
        secondNumber = rest;
    }while(rest != 0);//Condition to end cycle

    //Calculation LCM
    lcm = (firstNumberBackup * secondNumberBackup) / firstNumber;
    
    //Output 
    printf("THE LEAST COMMOM MULTIPLE BETWEEN %i AND %i IS %i", firstNumberBackup, secondNumberBackup, lcm);
}