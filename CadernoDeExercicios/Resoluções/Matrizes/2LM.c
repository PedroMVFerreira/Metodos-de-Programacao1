/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

//Directory
#include <stdio.h>

void main()
{
    //Data declaration and initialization -> size of the matrix 
    int rows, columns;
    //User input 
    printf("MATRIX SIZE\nROWS\t");
    scanf("%i", &rows);
    printf("COLUMNS\t");
    scanf("%i", &columns);
    //Data declaration and initialization -> matrix, array and auxiliaries 
    int matrix[rows][columns], vectorRow[rows], vectorColumns[columns], i, j, sum = 0;
    //User input -> reading the values of the matrix
    printf("\n\nMATRIX\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            printf("%i ROW %i COLUMN\t", i + 1, j + 1);
            scanf("%i", &matrix[i][j]);
        }
    }
    //Calculations -> sum of the rows -> exercise L
    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            sum += matrix[i][j];
        }
        vectorRow[i] = sum;
        sum = 0;
    }
    //Calculations -> sum of the columns -> exercise M
    for(j = 0; j < columns; j++){
        for(i = 0; i < rows; i++){
            sum += matrix[i][j];
        }
        vectorColumns[j] = sum;
        sum = 0;
    }
    printf("\n\n");
    //Output -> exercise M and per consequence exercise L
    for(i = 0; i < rows; i++){
        printf("SUM OF THE %i ROW\t %i\n", i +1, vectorRow[i]);
    }
    printf("\n");
    for(i = 0; i < columns; i++){
        printf("SUM OF THE %i COLUMN\t %i\n", i + 1, vectorColumns[i]);
    }
}