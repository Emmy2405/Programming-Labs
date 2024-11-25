/*

Program Description: Show how to initialise two 3x4 arrays  when they are declared and  declare a 3 rd 3x4 array.
                    Multiply each corresponding element in the 1 st and 2 nd array and store this product in the 
                    corresponding element of the 3 rd array.

Author: Eman Abdelatti

Date: 21/11/2023

*/
#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int array1[ROW][COL];
    int array2[ROW][COL];
    int array3[ROW][COL];
    int i = 0;
    int j = 0;


    printf("\nPlease enter %d numbers for the first array:\n", ROW * COL);


    for ( i = 0; i < ROW ; i++)//beginning of  ROW for loop 
    {
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            //this is where the elements for the first array are entered
            scanf("%d", &array1[i][j]);
        }//end of COL for loop
        
    }//end of ROW for loop


    for ( i = 0; i < ROW ; i++)//beginning of  ROW for loop 
    {
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            //this is where the elements for the first array are printed
            printf("\nThe number in the first array are:%d , row %d, column %d", array1[i][j], i, j);
        }//end of COL for loop
        
    }//end of ROW for loop

    printf("\n\n");
    printf("\nPlease enter %d numbers for the second array:\n", ROW * COL);


    for ( i = 0; i < ROW ; i++)//beginning of  ROW for loop 
    {
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            //this is where the numbers for the second array are entered
            scanf("%d", &array2[i][j]);
        }//end of COL for loop
        
    }//end of ROW for loop


    printf("\n\n");


    for ( i = 0; i < ROW ; i++)//beginning of  ROW for loop 
    {
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            //this is where the elements for the second array are printed
            printf("\nThe elements in the second array are:%d, row %d, column %d", array2[i][j], i, j);
        }//end of COL for loop
        
    }//end of ROW for loop


    printf("\n\n");


    for ( i = 0; i < ROW ; i++)//beginning of  ROW for loop 
    {
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            //this for loop is where the numbers from the first and second array are printed and are stored in the third array
            array3[i][j] = (array1[i][j] * array2[i][j]);
            printf("\nArray 3 contains:%d , row %d , column %d", array3[i][j], i, j);
        }//end of COL for loop
        
    }//end of ROW for loop


    return 0;
}//end main