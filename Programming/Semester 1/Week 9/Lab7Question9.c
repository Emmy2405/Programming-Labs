/*

Program Description:

Author: Eman Abdelatti

Date: 14/11/2023

*/

#include <stdio.h>

#define ROW 4
#define COL 5

int main()
{
    int array[ROW][COL];
    int i , j;


    printf("\nEnter %d integer numbers:\n", ROW * COL);


    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            scanf("%d", &array[i][j]);
        }
        
    }


    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            if (array[i][j] < 0)
            {
                printf("\nRow %d , column %d contains number :%d", i, j, array[i][j]);
            }
            
        }
        
    }

    return 0;
    
}