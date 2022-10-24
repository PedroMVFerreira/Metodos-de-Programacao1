/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

//Directory
#include <stdio.h>

//Function prototypes
int minimumOfLineCalculator(int size, int matrix[size][size], int gL);
float averageOfColumnCalculator(int size, int matrix[size][size], int gC);
int sumOfPrimaryDiagonalCalculator(int size, int matrix[size][size]);
int sumOfSecondaryDiagonalCalculator(int size, int matrix[size][size]);
int numberOfOccurrences(int size, int matrix[size][size], int number);

//Exercise 2a -> Read a matrix from the keyboard 
void main()
{
    //Program intention
    printf("THIS PROGRAM READS A MATRIX FROM THE KEYBOARD\n");
    printf("DUE TO SOME EXERCISES NEEDS THE PROGRAM ONLY READS SQUARE MATRIX\n\n");
    
    //Data declaration and initialization 
    int size;

    printf("\t\t\tExercise 2A\t\t\t\n");
    //Input
    printf("MATRIX SIZE\t");
    scanf("%i", &size);

    //Data declaration and initialization 
    int matrix[size][size], indexL, indexC; // L -> line || C -> column

    /*
    The first for cycle is used to iterate trough the lines of the matrix and the second one is used to iterate trough the columns, the program only 
    jumps to a new line when all the columns of the previous line are full
    Input 
    */
    for(indexL = 0; indexL < size; indexL++){
        for(indexC = 0; indexC < size; indexC++){
            printf("ENTER THE INTEGER FOR THE %i LINE %i COLUMN OF THE MATRIX\t", (indexL + 1), (indexC + 1));
            scanf("%i", &matrix[indexL][indexC]);
        }
    }

    //Printing the enter matrix -> Output 
        printf("\n\t\tMATRIX %iX%i\n\n\t\t", size, size);
        for(indexC = 0; indexC < size; indexC++)
            printf(" %i ",indexC);
        printf("\n\t");
        for(indexC = 0; indexC <= size; indexC++)
            printf("----");
        printf("\n");
        for(indexL = 0; indexL < size; indexL++){
            printf("\t%i |\t", indexL);
            for(indexC = 0; indexC < size; indexC++){
                printf("%i|", matrix[indexL][indexC]);
            }
            printf("\n\t");
            for(indexC = 0; indexC <= size; indexC++)
                printf("----");
            printf("\n");
        }
        printf("\n\t\t\tEnd of exercise 2A\t\t\t\n\n");


        //Exercise 2b
        //Data declaration and initialization 
        int givenLine, minimum;
        
        //Input
        printf("\t\t\tExercise 2B\t\t\t\n");
        printf("THE MINIMUM VALUE OF A GIVEN LINE WILL BE PRESENTED\n");
        printf("CHOOSE THAT LINE. BETWEEN 0 AND %i\t", (size - 1));
        scanf("%i", &givenLine);

        //Invoking the function responsible to calculate the minimum of a given Line 
        minimum = minimumOfLineCalculator(size, matrix, givenLine);
        //Output
        printf("\nTHE MINIMUM OF THE LINE %i IS %i\n", givenLine, minimum);
        printf("\n\t\t\tEnd of exercise 2B\t\t\t\n\n");


        //Exercise 2c
        //Data declaration and initialization 
        int givenColumn;
        float average;

        //Input 
        printf("\t\t\tExercise 2C\t\t\t\n");
        printf("THE AVERAGE OF A GIVEN COLUMN WILL BE CALCULATED\n");
        printf("CHOOSE THAT COLUMN. BETWEEN 0 AND %i\t", (size - 1));
        scanf("%i", &givenColumn);

        //Invoking the function responsibly to calculate the average of a given column 
        average = averageOfColumnCalculator(size, matrix, givenColumn);
        //Output
        printf("\nTHE AVERAGE OF THE LINE %i IS %.2f\n", givenColumn, average);
        printf("\n\t\t\tEnd of exercise 2C\t\t\t\n\n");


        //Exercise 2d
        //Data declaration and initialization 
        int sumPrimaryDiagonal;

        //Invoking the function responsible to calculate the sum of the main diagonal 
        sumPrimaryDiagonal = sumOfPrimaryDiagonalCalculator(size, matrix);
        //Output 
        printf("\t\t\tExercise 2D\t\t\t\n");
        printf("THE SUM OF THE MAIN DIAGONAL IS %i\n", sumPrimaryDiagonal);
        printf("\n\t\t\tEnd of exercise 2D\t\t\t\n\n");


        //Exercise 2e
        //Data declaration and initialization 
        int sumSecondaryDiagonal;

        //Invoking the function responsible to calculate the sum of the main diagonal 
        sumSecondaryDiagonal = sumOfSecondaryDiagonalCalculator(size, matrix);
        //Output 
        printf("\t\t\tExercise 2D\t\t\t\n");
        printf("THE SUM OF THE SECONDARY DIAGONAL IS %i\n", sumSecondaryDiagonal);
        printf("\n\t\t\tEnd of exercise 2D\t\t\t\n\n");
}

//Function to resolve exercise 2B
int minimumOfLineCalculator(int size, int matrix[size][size], int gL)//gL -> given Line
{
    //Data declaration and initialization 
    int minimum = matrix[gL][0], indexC;//The minimum value is set to the first number of the given line

    for(indexC = 0; indexC < size; indexC++){//The cycle will go trough the given line, jumping from column to column 
        if(minimum > matrix[gL][indexC])//If we find a smaller number than the minimum the new number will be set as the minimum
            minimum = matrix[gL][indexC];
    }
    return minimum;//Returning the minimum value of the given column 
}

//Function to resolve exercise 2C
float averageOfColumnCalculator(int size, int matrix[size][size], int gC)
{
    //Data declaration and initialization 
    int sum = 0, indexL;
    float average;

    for(indexL = 0; indexL < size; indexL++){//The cycle will go trough the given column jumping from line to line
        sum += matrix[indexL][gC];//The sum is set to the previous value (initial 0) plus the value of the current position 
    }

    average = (float)sum / (float)size;//Calculating the average, the sum of all numbers in the column divided by the number of numbers in that column 

    return average;//Returning the average
}

//Function to resolve exercise 2D
int sumOfPrimaryDiagonalCalculator(int size, int matrix[size][size])
{
    //Data declaration and initialization 
    int sum = 0, index; 

    for(index = 0; index < size; index++)//The cycle will jump trough the diagonal starting in position (0-0), (1-1), (2-2) until the end of the diagonal
        sum += matrix[index][index];//The sum is set to the previous value (initial 0) plus the value of the current position 

    return sum;//Returning the sum
}

//Function to resolve exercise 2E
int sumOfSecondaryDiagonalCalculator(int size, int matrix[size][size])
{
    //Data declaration and initialization 
    int sum = 0, index; 

    for(index = 0; index < size; index++)//The cycle will jump trough the diagonal starting in position (n-n), (n-1-n-1), until the end of the diagonal
        sum += matrix[index][size - 1 - index];//The sum is set to the previous value (initial 0) plus the value of the current position

    return sum;//Returning the sum
}
