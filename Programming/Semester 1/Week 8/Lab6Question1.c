/*

Program Description: This program  uses an array to enter 5 integer numbers. Copy the contents of
the array into another array

Author: Eman Abdelatti

Date: 07/ 11/2023

*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int array1[SIZE];
    int array2[SIZE];
    int i;


    //Here the user enters the five integers
    printf("\nPlease enter any five integer numbers:\n", array1);


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //This loop is to insert the numbers 
        scanf("%d", &array1[i]);
    }//end of for loop


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //This is to transfer the numbers from the first array into the second array
        array2[i] = array1[i];
    }//end of for loop
    

    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //This loop is to print off the second array
        printf("\n%d", array2[i]); 
    }//end of for loop                                        

    return 0;
}