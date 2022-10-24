/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

//Function prototypes 
int maximumCalculate(int n1, int n2, int n3, int n4, int n5);
int minimumCalculate(int n1, int n2, int n3, int n4, int n5);
float averageMaxMin(int min, int max);

void main()
{
    //Data declaration and initialization 
    int number1, number2, number3, number4, number5, minium, maximum;
    float average;

    //Program intention 
    printf("THIS PROGRAM WILL RECEIVE FIVE NUMBERS AND INVOKE FUNCTION TO CALCULATE THE MINIMUM, MAXIMUM AND THE AVERAGE BETWEEN THE MAXIMUM AND MINIMUM");
    
    //Input
    printf("\n\nENTER THE FIRST NUMBER\t");
    scanf("%i", &number1);
    printf("ENTER THE SECOND NUMBER\t");
    scanf("%i", &number2);
    printf("ENTER THE THIRD NUMBER\t");
    scanf("%i", &number3);
    printf("ENTER THE FOURTH NUMBER\t");
    scanf("%i", &number4);
    printf("ENTER THE FIFTH NUMBER\t");
    scanf("%i", &number5);

    //Invoking functions 
    maximum = maximumCalculate(number1, number2, number3, number4, number5);//Maximum
    minium = minimumCalculate(number1, number2, number3, number4, number5);//Minimum
    average = averageMaxMin(minium, maximum);//Average

    //Output 
    printf("THE AVERAGE BETWEEN THE MINIMUM VALUE (%i) AND THE MAXIMUM VALUE (%i) IS %.2f\n", minium, maximum, average);
}

//This function will receive 5 numbers and return the maximum of this 5 values
int maximumCalculate(int n1, int n2, int n3, int n4, int n5)
{
    //Data declaration and initialization 
    int maximum;

    maximum = n1; 

    if(n2 > maximum)
        maximum = n2;
    if(n3 > maximum)
        maximum = n3;
    if(n4 > maximum)
        maximum = n4;
    if(n5 > maximum)
        maximum = n5;

    return maximum; //Returning of the maximum value 
}

//This function will receive 5 numbers and return the minimum of this 5 values 
int minimumCalculate(int n1, int n2, int n3, int n4, int n5)
{
    //Data declaration and initialization 
    int minimum;

    minimum = n1;

    if(n2 < minimum)
        minimum = n2;
    if(n3 < minimum)
        minimum = n3;
    if(n4 < minimum)
        minimum = n4;
    if(n5 < minimum)
        minimum = n5;

    return minimum;//Returning of the minimum value 
}

//This function will receive the maximum and the minimum of the 5 values and calculate the average 
float averageMaxMin(int min, int max)
{
    //Data declaration and initialization 
    float average;

    average = (((float)min + (float)max) / 2);//Calculations 

    return average;//Returning of the average value between the minimum and maximum values 
}