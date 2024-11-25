/*

Program Description:

Author: Eman Abdelatti

Date: 14/11/2023

*/

#include <stdio.h>

#define SIZE 15

int main()
{
    int array[SIZE];
    int i;
    int t;


    printf("\nEnter %d numbers:\n", SIZE);

    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        scanf("%d", &array[i]);
    }//end of for loop


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        printf("\n%d\n", array[i]);
    }//end of for loop
    

    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        printf("\n%d\n", array[i]);
    }//end of for loop


     for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        t = array[i];
        array[i] = array[(SIZE -1 )-i];
        array[(SIZE -1 )-i] = t;
        printf("\n%d", t);
    }//end of for loop
    

}