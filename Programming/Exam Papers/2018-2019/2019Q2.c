/*

Program Description: having 3 arrays, one for gallons, miles and mpg. entering values into the gallons and 
                     miles array and using those values to find the mpg.
                     we also find the highest and lowest mpg in the array

Author: Eman Abdelatti

Date: 28/04/2024

*/

#include <stdio.h>

#define SIZE 5

int main()
{
    float gallons[SIZE];
    float miles[SIZE];
    float mpg[SIZE];
    float highest = 0;
    float lowest = 0;
    int i;


    printf("\nPlease enter the %d values for the gallons:\n", SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%f", &*(gallons + i));
    }

    printf("\nPlease enter the %d values for the miles:\n", SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%f", &*(miles + i));
    }

    for ( i = 0; i < SIZE; i++)
    {
        mpg[i] = miles[i] / gallons[i];
    }

    printf("\nThe values for the mpg is:\n");

    for ( i = 0; i < SIZE; i++)
    {
        printf("\n%.2f", mpg[i]);
    }

    highest = mpg[0];
    lowest = mpg[0];
    
    for ( i = 0; i < SIZE; i++)
    {
        if (highest < mpg[i])
        {
            highest = mpg[i];
        }
        if (lowest >  mpg[i])
        {
            lowest = mpg[i];
        }
        
    }

    printf("\nThe highest value in the mpg array is: %.2f", highest);

    printf("\nThe lowest value in the mpg array is: %.2f", lowest);
    
    
    return 0;
}