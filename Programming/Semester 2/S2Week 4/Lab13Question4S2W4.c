/*

Program Description:Make a copy of Q2 above but this time, use your function to
                    change the contents of the array, i.e. multiply each number in the array by 2. When
                    your function has finished and your program continues in your main(), print the
                    contents of your array in your main() and see if the changes made to the contents of
                    the array in your function can be seen. If not, why?

Author: Eman Abdelatti

Date: 13/02/2024

*/

#include <stdio.h>

#define SIZE 5

void value(int *);

int main()
{
    int array[SIZE];
    int i = 0;


    printf("\n\nPlease enter %d numbers:\n", SIZE);
    

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    for ( i = 0; i < SIZE; i++)
    {
        printf("\nThe numbers you have entered are:%d", array[i]);
    }
    

    value(array);

    for(i = 0; i< SIZE; i++)
    {
        printf("\n\nThe number multiplied by 2 is:%d", array[i]);
    }

    return 0; 

}

void value(int *arr)
{
    int i = 0;


    for(i = 0; i < SIZE; i++)
    {
        arr[i] = arr[i] * 2;
    }

}