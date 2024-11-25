/*
Program Description:

Author: Eman Abdelatti

Date: 25/04/2024

*/

#include <stdio.h>

#define SIZE 5

void blank(void);

int main()
{
    float my_array[SIZE] = {0};
    int i;


    //for ( i = 0; i < SIZE; i++)
    {
        //scanf("%f", &*(my_array + i));
    }

    printf("\nHere is the printed list:");

    for ( i = 0; i < SIZE; i++)
    {
        printf("%f", *(my_array + i));
    }

    blank();

    return 0;
}

void blank(void)
{
    char barack[] = {'Y', 'E', 'S', ' ', 'W', 'E', ' ','C', 'A', 'N'};

    
    for (int i = 0; i < 10; i++)
    {
        if (barack[i] == ' ')
        {
            barack[i] = '_';
        }
        
    }

    printf("\n\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%c", barack[i]);
    }
    
}