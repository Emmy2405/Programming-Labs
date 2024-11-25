/*

Program Description: This program is to write a program that uses DMA to allocate memory for 5 floating-point numbers.
                     After memory has been allocated for the 5 float numbers, enter these numbers into the memory block.
                     Calculate and display the average of the numbers stored in the memory block.

Author: Eman Abdelatti

Date: 12 /12/ 2023

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    float *ptr;
    float sum = 0;
    float average = 0;
    int i;
    

    //printf statement to ask the user to enter  5 numbers
    printf("Enter %d floating point numbers\n", SIZE);

    // This step is to allocate the block of memory required
    ptr = calloc(SIZE , sizeof(float));


    if (ptr == NULL)//beginning of if statement
    {
        //This if statement is if allocating the block of memory was unsuccessful
        printf("\nFailed to allocate memory\n");

        return 0;

    }//end of if statement
    else//if allocating the block of memory was successful
    {
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", SIZE);


        for ( i = 0; i < SIZE; i++)
        {//beginning of for loop
            //scanf to enter the numbers the user wants
            scanf("%f" , &*(ptr + i));

            //this line is to add the numbers entered together into the sum
            sum = sum + *(ptr + i);
        }//end of for loop


        printf("\nYou entered:\n");
        // Display the data items entered into the allocated memory block


        for(i = 0; i < SIZE; i++)
        {//beginning of for loop
            printf("%.3f\n", *(ptr + i));
        } // end of for loop

        // Free the allocated memory block once finished using it
        free(ptr);
        
    }//end else statement

    //this line is to find and print off the average
    average = sum / SIZE;
    printf("The average of the float numbers entered is:%.3f" , average);
    
    return 0;

}