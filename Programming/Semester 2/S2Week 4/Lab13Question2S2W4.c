/*

Program Description:Write a program that uses a function to find the highest number in
                    an array containing 5 numbers. In the main(), you must ask the user to enter 5
                    numbers and store these in the array. Pass the array to a function and your function
                    must find the highest number. Return this number to your main() and display it.

Author: Eman Abdelatti

Date: 13/02/2024

*/

#include <stdio.h>

#define SIZE 5

int value(int *);

int main()
{
    int array[SIZE];
    int i = 0;
    int highest = 0;


    printf("\n\nPlease enter %d numbers:\n", SIZE);
    

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    highest = value(array);

    printf("\n\nThe highest number is:%d", highest);

    return 0; 
}

int value(int *arr)
{
    int highest = 0;
    int i = 0;

    highest = arr[0];

    for(i = 0; i < SIZE; i++)
    {
        if(highest< arr[i])
        {
            highest = arr[i];
        }
    }

    return highest;
}