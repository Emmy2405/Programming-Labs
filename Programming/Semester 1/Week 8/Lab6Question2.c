/*

Program Description:

Author: Eman Abdelatti

Date: 07/11/2023

*/

#include <stdio.h>

#define SIZE 3

int main()
{
    float fahrenheit[SIZE];
    float celsius[SIZE];
    int i;


    printf("Enter 3 temperatures in Fahrenheit:\n", fahrenheit );


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        scanf("%f", &fahrenheit[i]);
    }//End of for loop


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        celsius[i] = (fahrenheit[i] - 32.0) * (5.0 / 9.0);
        
    }//End of for loop


     for ( i = 0; i < SIZE; i++)//beginning of for loop
    {  

        printf("\nThis is the temperature in  celsius %f", celsius[i]);  

    }//End of for loop

    return 0;

}