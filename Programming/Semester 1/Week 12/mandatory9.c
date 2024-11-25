/*
Program Description: This program is using transferring numbers from one array to another using pointer notations only

Author: Eman Abdelatti

Date: 05 /12 / 2023

*/

#include <stdio.h>

#define SIZE 3

int main()
{
    float array1[SIZE];
    float array2[SIZE];
    int i;


    printf("\nPlease enter %d decimal point numbers:\n", SIZE);//printf statement to tell user to enter in the numbers


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //this for loop is to allow the user to enter in the numbers in array1 using a scanf
        scanf("%f", (array1 + i));
    }//end of for loop


    printf("\nThe numbers in the first array are:\n");


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //this for loop is to print off the numbers in the first array
        printf("\n%.3f", *(array1 + i));
    }//end of for loop


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //This loop is to transfer the numbers from the first array into the second array
        *(array2 + i) = *(array1 + i);
    }//end of for loop

    printf("\n\nThe numbers in the second array are:\n");


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //this for loop is to print off the numbers in the second array
        printf("\n%.3f", *(array2 + i));
    }//end of for loop
    
    return 0;

}