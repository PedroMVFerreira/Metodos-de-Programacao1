/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    char sex;
    int wage, control = 0;
    float tax; 

    //Program intention
    printf("THIS PROGRAM WILL CALCUTE THE TAX OWNED BY MAN AND WOMEN BASE ON A DIFFERENT TAX PERCENTAGE FOR THE DIFFERENT SEXES\n\n");

    //Input 
    printf("SELECT YOUR SEX\nM -> MALE\nF  -> FEMALE\n");
    scanf("%c", &sex);
    printf("ENTER YOUR WAGE\t");
    scanf("%i", &wage);

    switch(sex){
        case 'M'://Condition male 
            tax = wage * 0.10;
        break;
        case 'F'://Condition female
            tax = wage * 0.05;
        break;
        default:
            printf("PLEASE CHOOSE A VALID OPTION\n");//Output 
            control = 1;
        break;
    }

    //Output 
    if(control == 0)
        printf("YOU OWNED %.2f IN TAXES\n", tax);//Output 
}