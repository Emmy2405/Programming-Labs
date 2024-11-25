/*

Program Description: This program is about using 2D arrays to enter values in the array, display the values, 
                    find the hightest and lowest number and find the average of those numbers

Author: Eman Abdelatti

Date: 14/11/2023

*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL];
    int i , j;
    int sum = 0;
    float average = 0;
    int highest = 0;
    int lowest = 0;


    //This printf is so the user can see where they should display the numbers
    printf("\nPlease enter %d numbers:\n", ROW * COL);


    for ( i = 0; i < ROW; i++)//beginning of ROW for loop
    { 
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            //this for loop is so the user can enter the numbers into the array
            scanf("%d", &array[i][j] );

            // add the current value in sum to the number entered, i.e., keep a running sum total of numbers
            sum = sum + array[i][j];

        }//end of COL for loop

    }//end of ROW for loop


    for ( i = 0; i < ROW; i++)//beginning of ROW for loop
    { 
        for ( j = 0; j < COL; j++)//beginning of COL for loop
        {
            //this for loop is so that the numbers entered into the for loop can be displayed
            printf("\nRow %d Column %d contains number :%d \n", i , j , array[i][j]);
        }//end of COL for loop
        
    }//end of ROW for loop


    //this line is to help us find the highest value
    // Assume the highest number in the array number is inside element 0
    highest = array[0][0];
    
    //this line is to help us find the lowest value
    // Assume the lowest number in the array number is inside element 0
    lowest = array[0][0];


    for ( i = 0; i < ROW; i++)//beginning of for loop
    {
        for ( j = 0; j < COL; j++)//beginning of for loop
        {
            if (highest < array[i][j])//beginning of if statement for highest number
            {
                highest = array[i][j];
            }//end of if statement 

            if (lowest > array[i][j])//beginning of if statement for lowest number
            {
                lowest = array[i][j];
            }//end of if statement 
            
        }//end of for loop
        
    }//end of for loop


    // Display the highest and lowest number in the array
    printf("\n\nThe highest number is %d", highest);
    printf("\n\nThe lowest number is %d", lowest);

    //this line is to find the average
    average = (float)sum / (ROW * COL);

    printf("\n\nThe average number is %.1f", average);

    return 0;

}//end main
