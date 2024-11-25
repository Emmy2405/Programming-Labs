/*

Program Description:

Author: Eman Abdelatti

Date: 21/11/2023

*/
#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL] = {0};
    int i;
    int j;
    int highest;
    int sum = 0;
    
    printf("\nPlease enter %d numbers:\n", ROW * COL);


    for ( i = 0; i < ROW; i++)//beginning of  ROW for loop
    {
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            //This loop is where the user enters the numbers into the array
            scanf("%d", &array[i][j]);
        }//end of COL for loop

    }//end of ROW for loop


    printf("\nMatrix of results:\n\n");

    // For loop to print 2D array contents in a matrix
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d,", array[i][j]);

            // If statement to create a matrix of results
            if (j == COL - 1)
            {
                printf("\n");
            }
        }
    }

    // this handles rows
    for ( i = 0; i < ROW; i++)//beginning of  ROW for loop
    {
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            if (i == 0 || i == 1 || i == 2)
            {
                sum = sum + array[i][j];
            }
        }//end of COL for loop

        printf("\nThe sum of row %d is: %d", i ,sum);

        sum = 0;

    }//end of ROW for loop


    for ( j = 0; j < COL; j++)//beginning of  ROW for loop
    {
        for ( i = 0; i < ROW; i++)//beginning of COL for loop
        {
            if (j == 0 || j == 1)
            {
                sum = sum + array[i][j];
            }   
        }//end of COL for loop

        printf("\nThe sum of column %d is: %d", j, sum);

        sum = 0;

    }//end of ROW for loop


    highest = array[0][0];


    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            if (highest < array[i][j])//beginning of if statement for highest number
            {
                highest = array[i][j];
            }//end of if statement
        }
        
    }

    printf("\n\nThe highest number is %d", highest);



    
    return 0;

}