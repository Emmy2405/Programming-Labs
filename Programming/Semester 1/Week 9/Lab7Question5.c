/*

Program Description:

Author: Eman Abdelatti

Date: 14/11/2023

*/

#include <stdio.h>

#define SIZE 5
#define SIZE2 5

int main()
{
    int array1[SIZE];
    int array2[SIZE2];
    int i , j;
    int sum;


    printf("\nPlease enter %d numbers for the first array:\n", SIZE);
    

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("\nPlease enter %d numbers for the second array:\n", SIZE2);


    for ( j = 0; j < SIZE2; j++)
    {
        scanf("%d", &array2[j]);
    }


    for ( i = 0; i < SIZE; i++)
    {
        sum = (array1[i] * array2[j]);
        printf("\n%d", sum);       
    }
    
    return 0;
    
}
