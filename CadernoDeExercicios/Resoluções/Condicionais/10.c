/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    char letter;

    //Program intention 
    printf("THIS PROGRAM WILL PRINT THE FOLLOW 4 LETTERS IN THE ALFABETH FROM THE CHOOSEN LETTER\n\n");

    //Input 
    printf("CHOOSE A LETTER FROM A TO Z\t");
    scanf("%c", &letter);

    //Condition 
    if(letter > 65 && letter < 86){ //From A to V there are four letters until Z in the alphabet to print so we can use the ascii table to print the 
        for(int i = 1; i < 5; i++){ //next four letters from the one chosen (A -> 65 and V -> 86)
            printf("%c\t", letter+i);//output
        }
    }
    if(letter == 87)//Letter choosen was W
        printf("X\tY\tZ\tA\t");//Output
    if(letter == 88)//Letter choosen was X
        printf("Y\tZ\tA\tB\t");//Output
    if(letter == 89)//Letter choosen was Y
        printf("Z\tA\tB\tC\t");//Output 
    if(letter == 90)//LEtter choosen was Z
        printf("A\tB\tC\tD\t");//Output 

}