/*

Program Description:

Author: Eman Abdelatti

Date: 07/11/2023

*/

#include <stdio.h>

#define SIZE 3

int main()
{
    int num[SIZE];
    int i , j;
    int var;


    printf("Please enter 3 integer numbers:", num);


    for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        scanf("%d", &num);
    }//end of for loop


    for ( j = i + 1; j < SIZE; j++)//beginning of for loop
    {
        var = num[i];
        num[i] = num[j];
        num[j] = var;
    }//end of for loop


for ( i = 0; i < SIZE; i++)//beginning of for loop
    {
        printf("\n%d", num[i]);
    }//end of for loop


    return 0;

}