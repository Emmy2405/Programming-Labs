/*

Program Description:

Author: Eman Abdelatti

Date: 07/11/2023

*/

#include <stdio.h>

#define SIZE 5

int main()
{
    char letter[SIZE];
    int i;


    printf("\nPlease enter any five letters of your choice:\n", letter);


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        scanf(" %c", &letter[i]);
    }//end of for loop


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        printf("\n%c", letter[i]);
    }//end of for loop
  
    return 0;
}