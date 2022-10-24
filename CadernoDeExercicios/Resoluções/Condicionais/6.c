/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int number1, number2, number3; 

    //Input -> reading the 3 numbers in succession 
    printf("Enter the first number\t");
    scanf("%i", &number1);
    printf("Enter the second number\t");
    scanf("%i", &number2);
    printf("Enter the third number\t");
    scanf("%i", &number3);

    //There are 6 possible combinations to order 3 numbers in ascending order
    //n1 < n2 < n3
    if(number1 < number2 && number2 < number3)
        printf("%i < %i < %i", number1, number2, number3);  //Output
    //n1 < n3 < n2
    if(number1 < number3 && number3 < number2)
        printf("%i < %i < %i", number1, number3, number2);  //Output
    //n2 < n1 < n3
    if(number2 < number1 && number1 < number3)
        printf("%i < %i < %i", number2, number1, number3);  //Output
    //n2 < n3 < n1
    if(number2 < number3 && number3 < number1)
        printf("%i < %i < %i", number2, number3, number1);  //Output
    //n3 < n1 < n2
    if(number3 < number1 && number1 < number2)
        printf("%i < %i < %i", number3, number1, number2);  //Output
    //n3 > n2 > n1
    if(number3 < number2 && number2 < number1)
        printf("%i < %i < %i", number3, number2, number1);  //Output
}