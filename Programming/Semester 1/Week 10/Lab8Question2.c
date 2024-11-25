/*

Program Description:

Author: Eman Abdelatti

Date: 21/11/2023

*/
#include <stdio.h>

#define ROW 4
#define COL 6

int main()
{
    int data[ROW][COL] ={{3, 2, 5, 7, 4, 2},
                         {1, 4, 4, 8, 13, 1},
                         {9, 1, 0, 2,0 ,0 },
                         {0, 2, 6, 3, -1, -8}
                        };
    // declare the sum
    int i;
    int j;
    int sum = 0;
    

    // compute the sum
    for ( i=0; i < ROW; i++)
    {
        for ( j=0; j < COL; j++)
        {
            sum = data[i][j] + sum;
        }
    }


    // display the sum
    printf("\nThe sum of the numbers are:%d", sum);

    return 0;
}