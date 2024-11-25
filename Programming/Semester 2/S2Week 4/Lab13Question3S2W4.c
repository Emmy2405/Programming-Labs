/*
Program Description:

Author: Eman Abdelatti

Date: 13/02/2024
*/

#include <stdio.h>

#define SIZE 5

int value(int );

int main()
{
    int array[SIZE];
    int i = 0;
    int average = 0;
    int sum = 0;


    printf("\n\nPlease enter %d numbers:\n", SIZE);
    

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);

        sum = sum + array[i];
    }

    average = value(sum);

    printf("\n\nThe highest number is:%d", average);

    return 0; 
}

int value(int sum)
{
    int average = 0;

    average = sum / SIZE;

    return average;
}