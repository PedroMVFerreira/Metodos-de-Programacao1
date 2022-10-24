/*
    Pedro Miguel do Vale Ferreira || a95699
    MP 1 -> MIETI 
    Final project -> re-edition (documentation and code)
*/

/* Program status
June 16 -> The program is reading the inputs, checking if they are well formatted and placing the well formatted strings in a linked list 
in order of insertion (head of the list is the first node inserted and the tail of the list is the last node)
*/

//Directory 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Linked list 
typedef struct Node {
    char string[51];
    struct Node *next; 
}node;
//Linked list head declaration and initialization
node *head = NULL;

//Functions prototypes 
void insert(char string[51]);
void display();

//Function responsible for reading user inputs and verifying that the strings inserted by the user are well formatted
void main()
{
    //Data declaration and initialization 
    char inputString[51];
    unsigned int size = 0, numberOfStrings = 1, index;

    //The program will ask for strings as long as the end string is not entered
    do{
        //The program will ask for strings as long as the maximum length is not respected
        do{
            //Reading the user input -> string
            printf("ENTER THE %uº STRING\t", numberOfStrings);
            scanf("%s", inputString);
            size = strlen(inputString);//Finding the size of the inputted string
            /*If the string does not comply with the formatting size (minimum 1 character and maximum 50) an error message will be displayed 
            and the string will be discarded and a new one will be requested.
            The size variable will be reset to 0 in preparation for a new reading.*/
            if(size < 1 && size > 50){
                printf("ERROR THE STRING YOU ARE TRYING TO INPUT HAS MORE THAN 50 CHARACTERS\n");
                size = 0;
            }
            /*If the string has the correct length and is not terminating, it will be incorporated into the linked list of accepted strings and 
            the total number of valid strings entered will be increased by one.
            The size variable will be reset to 0 in preparation for a new reading.*/
            else{
                if(strcmp(inputString, "#") != 0){
                insert(inputString);
                numberOfStrings++;
                size = 0;
                }
            }
        }while(size > 50);
    }while(strcmp(inputString, "#") != 0);
    //Test -> printing the linked list 
    display();
}

//Function responsible for inserting well-formatted strings in a linked list, the last string inserted will be the tail of the linked list
void insert(char string[51])
{
    //Data declaration and initialization 
    node *temp, *pointer; 
    temp=(node *)malloc(sizeof(node));
    //Memory cannot be allocated, error output and subsequent program termination
    if(temp == NULL){
        printf("MEMORY COULDN'T BE ALLOCATED\nFORCING SHUTDOWN\n\n");
        exit(0); //Forcing the program to shutdown 
    }
    else{//Memory was allocated and the node was created 
        strcpy(temp->string, string); //Passing the input string into 
        temp->next = NULL; //Creating a node without connections (off any linked list)
        //If the linked list is empty (there is no head) the node created will be the begging of the linked list (its head)
        if(head == NULL)
            head = temp;
        /*If the linked list is not empty (there is at least one head node) we will have to go through it until the last node and only then 
        insert the new one*/
        else{
            /*As we can never lose the reference to the head of the linked list, we will pass its contents to an auxiliary pointer and we will 
            work with this point*/
            pointer = head; 
            // It will be necessary to traverse the linked list until we find a node without a next assigned (end of the linked list)
            while(pointer->next != NULL)
                pointer = pointer->next;
            pointer->next = temp;
        }
    }
}


//Test function -> responsible to print the linked list content 
void display()
{
    //Data declaration and initialization 
    //As we can never lose the reference to the head of the linked list, we will pass its contents to an auxiliary pointer and we will 
    //work with this point
    node *pointer = head; 
    //There is no linked list created, the program will warn the user and then close
    if(pointer == NULL){
        printf("THERE IS NO LINKED LIST CREATED\n");
        exit(0);
    }
    //The linked list exists and its contents will be printed as long as nodes are found in it.
    else{
        printf("THE INPUTTED STRINGS BY THE USER WERE:\n\n");
        while(pointer != NULL){ //Traverse trough the linked list will finding nodes in it
            printf("\t%s\n", pointer->string); //Printing the content of the current node
            pointer = pointer->next; //Advance to the next node in the list
        }
    }
}
