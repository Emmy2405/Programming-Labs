/*
Program Description: Kilometres and miles conversion

Author: Eman Abdelatti

Date: 26/11/2023

*/

#include <stdio.h>

#define SIZE 5

int main()
{
    float Miles[SIZE];
    float Kilometres[SIZE];
    int i;


    printf("\nPlease enter %d numbers:\n", SIZE);

    for( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //This loop is used to enter the numbers into the Miles array
        scanf("%f", &Miles[i]);
    }//end of for loop


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //This loop is used to print the numbers from the Miles array
        printf("\nMile:%.1f", Miles[i]);
    }//end of for loop


    //Here we are entering the values from the first array into the second array
    for (i = 0; i < SIZE; i++)//beginning of for loop
    {
        Kilometres[i] = Miles[i];
    }//end of for loop

    printf("\n\n");

    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        //This loop is used to print the numbers from the Kilometres array
        printf("\nKilo:%.1f", Kilometres[i]);
    }//end of for loop

    
    
    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        Kilometres[i] = (Miles[i] / 5) * 8;
    }//end of for loop

    printf("\n\n");
    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        printf("\nThe Kilometres with the new values : %f",Kilometres[i]);
    }//end of for loop

    printf("\n\n");

    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        printf("\nMiles: %.1f | Kilometres: %.1f", Miles[i], Kilometres[i]);
    }//end of for loop


    return 0;
}