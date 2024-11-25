/*
Program Description: this program prints out your name with a space between each charcter

Author: Eman Abdelati

Date: 20/02/2024

*/

#include <stdio.h>

#define SIZE 10

int main()
{
    //declaring variables
    char name[SIZE];
    int i = 0;


    printf("\nPlease enter your name:\n");
    //scanf("%s", &name);
    fgets(name, SIZE-1, stdin);//where the user enters their name


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        if(name[i] != '\n')//beginning of if statement
        {
            //if statement to print out the space between each character
            printf("%c ", name[i]);

        }//end of if statement

    }//end of for loop
    
    return 0;
}