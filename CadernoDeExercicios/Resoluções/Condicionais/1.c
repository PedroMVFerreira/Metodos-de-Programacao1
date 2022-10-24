/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    float number, fractional;
    int whole;

    //Program intention 
    printf("THIS PROGRAM WILL RECEIVE A REAL NUMBER AND WILL DIVIDED IT IN ITS WHOLE AND FRACTIONAL PART\n\n");

    //Input 
    printf("PLEASE ENTER A REAL NUMBER\t");
    scanf("%f", &number);

    //Calculations 
    whole = (int)number;
    fractional = number - whole;

    //Output 
    printf("%.4f CAN BE DIVIDED IN ITS WHOLE PART %i AND ITS FRACTIONAL PART %.4f\n", number, whole, fractional);
}