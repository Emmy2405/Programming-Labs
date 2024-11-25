/*

Program Description:

Author: Eman Abdelatti

Date: 07/11/2023

*/

#include <stdio.h>

#define SIZE 4

int main()
{
    int array[SIZE];
    int i;
    int num;


    printf("\nPlease enter %d integer numbers:\n", SIZE);


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        scanf("%d", &array[i]);
    }//end of for loop

        num = array[0];
        array[0] = array[1];
        array[1] = num;
     
        num = array[2];
        array[2] = array[3];
        array[3] = num;
    
    for ( i = 0; i < SIZE; i++)// beginning of for loop
    {
        printf("\n%d", array[i]);
    }//end of for loop
    
    return 0;
}