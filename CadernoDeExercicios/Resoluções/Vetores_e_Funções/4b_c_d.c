/*
    Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

#include <stdio.h>

void main()
{
    //Execice 4b

    //Data declaration an initialization 
    int totalOfNumbers, index, sum = 0, total = 0;//sum stans for summation || total stands for the total of numbers that are bigger thant the average
    float average, percentage;

    //Program intention
    printf("THIS PROGRAM WILL ASK FOR A FIXED AMOUNT OF NUMBERS (GIVEN BY THE USER) STORING THEM IN AN ARRAY\n");
    printf("AFTER THAT THE PERCENTAGE OF NUMBERS BIGGER THEN THE AVERAGE WILL BE PRINTED\n");
    printf("TNE MAXIMUM VALUE WILL ALSO BE PRINTED AND AFTER THAT SAME VALUE WILL BE CHANCE TO 90 PERCENTAGE OF THE ORIGINAL\n\n");

    //Input -> number of numbers to be inputted
    printf("ENTER THE AMOUNT OF NUMBERS YOU WANT TO ENTER\t");
    scanf("%i", &totalOfNumbers);

    //Data declaration and initialization 
    float arrayOfNumbers[totalOfNumbers];

    for(index = 0; index < totalOfNumbers; index++){//Cycle to iterate trough the array 
        //Input 
        printf("ENTER THE %iº NUMBER\t", index + 1);
        scanf("%f", &arrayOfNumbers[index]);
    }

    //Average calculations  
    for(index = 0; index < totalOfNumbers; index++){//Cycle to iterate trough the array
        sum += arrayOfNumbers[index];//Calculation the sum of all numbers 
    }

    //Calculation the average 
    average = (sum / totalOfNumbers);

    //Percentage calculations 
    for(index = 0; index < totalOfNumbers; index++){//Cycle to iterate trough the array 
        if(arrayOfNumbers[index] > average)//The number in that particular position of the array is bigger than the average (valid case to the problem)
            total++;//Incrementing the number of numbers that satisfies the problem 
    }

    //Calculation the percentage of numbers bigger then the average 
    percentage = (total / (float)totalOfNumbers) * 100.00;

    //Output 
    printf("\nFROM THE %i NUMBERS YOU ENTER %.2f PERCENT ARE BIGGER THEN THE AVERAGE\n\n", totalOfNumbers, percentage);

    //End of the exercise 4b

    //Exercise 4c

    //Data declaration and initialization 
    float maximum = arrayOfNumbers[0]; // The maximum value is equal to the first number of the array because the array could contain only negative numbers

    for(index = 0; index < totalOfNumbers; index++){//Cycle to iterate trough the array 
        if(arrayOfNumbers[index] > maximum)//If a number of the array is bigger than the variable maximum that number is now the maximum 
            maximum = arrayOfNumbers[index];//Updating the maximum variable 
    }

    //Output 
    printf("THE MAXIMUM VALUE IS %.2f\n\n", maximum);

    //End of the exercise 4c 

    //Exercise 4d
    for(index = 0; index < totalOfNumbers; index++){//Cycle to iterate trough the array 
        if(arrayOfNumbers[index] == maximum){//The value of the maximum was found in the array
            arrayOfNumbers[index] = arrayOfNumbers[index] * 0.90;//The new maximum is now 90% of the old maximum value 
            printf("NEW MAXIMUM VALUE IS %.2f", arrayOfNumbers[index]);//Output 
        }
    }
}