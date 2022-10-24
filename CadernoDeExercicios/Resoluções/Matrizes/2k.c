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
    int rowsA, columnsA, rowsB, columnsB;
    //Information and user input 
    printf("IN ORDER TO BE POSSIBLE TO MULTIPLICATE THE TO MATRIX ITS MANDATORY THAT THE NUMBER OF COLUMNS OF THE FIRST MATRIX IS THE SAME AS THE NUMBER OF ");
    printf("ROWS OF THE SECOND MATRIX; WHIT THAT IN MIND PLEASE ENTER THE DIMENSIONS OF THE TWO MATRIXES\n\n");
    do{
        printf("FIRST MATRIX\nROWS\t");
        scanf("%i", &rowsA);
        printf("COLUMNS\t");
        scanf("%i", &columnsA);
        printf("\n\nSECOND MATRIX\nROWS\t");
        scanf("%i", &rowsB);
        printf("COLUMNS\t");
        scanf("%i", &columnsB);
    }while(columnsA != rowsB);
    //Data declaration and initialization -> matrixes and auxiliaries 
    int matrixA[rowsA][columnsA], matrixB[rowsB][columnsB], matrixC[rowsA][columnsB], i, j, x, aux = 0;
    //User input -> first and second matrix 
    printf("\n\nFIRST MATRIX\n");//Fist matrix
    for(i = 0; i < rowsA; i++){
        for(j = 0; j < columnsA; j++){
            printf("%i ROW %i COLUMN\t",i +1 ,j + 1);
            scanf("%i", &matrixA[i][j]);//Good input read and formation on first matrix -> checked 
        }
    }
    printf("\n\nSECOND MATRIX\n");//Second matrix
    for(i = 0; i < rowsB; i++){
        for(j = 0; j < columnsB; j++){
            printf("%i ROW %i COLUMN\t",i +1 ,j + 1);
            scanf("%i", &matrixB[i][j]);//Good input read and formation on first matrix -> checked
        }
    }
    //Calculations 
    for(i = 0; i < rowsA; i++){
        for(j = 0; j < columnsB; j++){
            matrixC[i][j] = 0;//Setting the matrix to C -> so we clean all the garbage in each position 
            for(x = 0; x < rowsB; x++){
                aux +=  matrixA[i][x] * matrixB[x][j];//Explanation 1
            }
            matrixC[i][j] = aux; //The calculated value is put in the respective position 
            aux = 0;//Reseting the value of aux
        }
    }
    //Output -> multiplication matrix 
    printf("\nFIRST MATRIX\n\n");
    for(i = 0; i < rowsA; i++){
        for(j = 0; j < columnsB; j++){
            printf("%i\t", matrixC[i][j]);
        }
        printf("\n");
    }
}
/* 
    EXPLANATION 1 
    To multiply the two matrices, what remains common in the first is the row during multiplication, while in the 
    second what remains common is the column from which we have as showed above  matrixA[i][x] * matrixB[x][j], when i and j are always the same for the
    same i,j position in the matrixC (multiplied matrix between A and B)
*/