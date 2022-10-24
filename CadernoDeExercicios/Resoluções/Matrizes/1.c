/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Program intentions 
    printf("THIS PROGRAM PREFORMS THE SUM OF TWO MATRIXES\n\n\n");

    //Data declaration -> size of the matrix 
    int numberOfLines, numberOfColumns; 

    //Inputs 
    printf("MATRIXES SIZES\n\n");
    printf("NUMBER OF LINES   ");
    scanf("%i", &numberOfLines);
    printf("NUMBER OF COLUMNS   ");
    scanf("%i", &numberOfColumns);

    //Data declaration and -> matrixes 
    int firstMatrix[numberOfLines][numberOfColumns], secondMatrix[numberOfLines][numberOfColumns], indexLines, indexColumns;
    int sumMatrix[numberOfLines][numberOfColumns];

    //Input -> first matrix 
    printf("FIRST MATRIX\n");
    for(indexLines = 0; indexLines < numberOfLines; indexLines++){
        for(indexColumns = 0; indexColumns < numberOfColumns; indexColumns++){
            printf("ENTER THE NUMBER IN THE %iº LINE %iº COLUMNS\t", (indexLines + 1), (indexColumns + 1));
            scanf("%i", &firstMatrix[indexLines][indexColumns]);
        }
    }

    //Input -> second matrix 
    printf("SECOND MATRIX\n");
    for(indexLines = 0; indexLines < numberOfLines; indexLines++){
        for(indexColumns = 0; indexColumns < numberOfColumns; indexColumns++){
            printf("ENTER THE NUMBER IN THE %iº LINE %iº COLUMNS\t", (indexLines + 1), (indexColumns + 1));
            scanf("%i", &secondMatrix[indexLines][indexColumns]);
        }
    }


    //Calculations  and Output 
    printf("MATRIX SUM\n\n");
    for(indexLines = 0; indexLines < numberOfLines; indexLines++){
        for(indexColumns = 0; indexColumns < numberOfColumns; indexColumns++){
            sumMatrix[indexLines][indexColumns] = firstMatrix[indexLines][indexColumns] + secondMatrix[indexLines][indexColumns];
            printf("%i\t", sumMatrix[indexLines][indexColumns]);
        }
        printf("\n");
    }
}