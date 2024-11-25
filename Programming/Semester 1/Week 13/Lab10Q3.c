/*

Program Description: This program is to write a program that uses DMA to allocate memory for 5 floating-point numbers.
                     After memory has been allocated for the 5 float numbers, enter these numbers into the memory block.
                     Calculate and display the average of the numbers stored in the memory block.

Author: Eman Abdelatti

Date: 12 /12/ 2023

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    float *ptr2;
    int numbers = 0;
    float sum = 0;
    float average = 0;
    int i;
    

    //printf statement to ask the user how many numbers they wish to enter
    printf("How many numbers do you wish to enter?\n");
    scanf("%d" , &numbers);

    // This step is to allocate the block of memory required
    ptr = calloc(numbers , sizeof(float));


    if (ptr == NULL)//beginning of if statement
    {
        //This if statement is if allocating the block of memory was unsuccessful
        printf("\nFailed to allocate memory\n");
    }//end of if statement


    else//if allocating the block of memory was successful
    {
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", numbers);


        for ( i = 0; i < numbers; i++)
        {//beginning of for loop
            //scanf to enter the numbers the user wants
            scanf("%f" , &*(ptr + i));

            //this line is to add the numbers entered together into the sum
            sum = sum + *(ptr + i);
        }//end of for loop


        printf("\nYou entered:\n");
        // Display the data items entered into the allocated memory block


        for(i = 0; i < numbers; i++)
        {//beginning of for loop
            printf("%.3f\n", *(ptr + i));
        } // end of for loop

        // Free the allocated memory block once finished using it
        free(ptr);
        
    }//end else statement

    //this line is to find and print off the average
    average = sum / numbers;
    printf("The average of the float numbers entered is:%.3f" , average);

    ptr2 = calloc(average , sizeof(float));

    printf("\n\nThe average of the numbers stored in the memory block: %.3f", ptr2);
    
    return 0;

}