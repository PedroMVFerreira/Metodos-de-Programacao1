/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int baseRadius, height;
    float pi = 3.14, area;

    //Program intention
    printf("THIS PROGRAM WILL CALCULATE THE SURFACE AREA OF A CYLINDER WHEN IT IS GIVEN THE RADIUS OF THE BASE AND THE HEIGHT OF THE CYLINDER\n");

    //Input 
    printf("ENTER THE RADIUS OF THE BASE OF THE CYLINDER\t");
    scanf("%i", &baseRadius);
    printf("ENTER THE HEIGHT OF THE CYLINDER\t");
    scanf("%i", &height);

    //Calculation 
    area = (height * (2 * pi * baseRadius) + 2 * pi * (baseRadius * baseRadius));

    //Output 
    printf("SURFACE AREA OF A CYLINDER OF BASE RADIUS %i AND HEIGHT %i IS %.2f\n", baseRadius, height, area);
}