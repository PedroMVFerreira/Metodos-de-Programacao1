/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

//Directory
#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int matrix[3][3] = {{1, 2, 3} , {1, 4, 5} , {1, 6 , 7}};
    int indexR, indexC; //R stands for Rows and C stands for Columns 
    int occurrences = 0;
    //Program intention 
    printf("THIS PROGRAM WILL COUNT THE NUMBER OF OCCURRENCES OF A CERTAIN NUMBER IN A MATRIX\nTHE NUMBER IN QUESTION WILL BE THE NUMBER 1\n\n\n\n");
    //The two for cycles will be used to iterate trough the matrix 
    for(indexR = 0; indexR < 3; indexR++){
        for(indexC = 0; indexC < 3; indexC++){
            if(matrix[indexR][indexC] == 1)
                occurrences++;
        }
    }
    //Output 
    printf("THE NUMBER 1 OCCURRES %i IN THE MATRIX\n\n", occurrences);
}