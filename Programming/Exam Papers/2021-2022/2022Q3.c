/*
Program Description: 3. (a) You are a software developer and asked to develop a program that allows a user to enter 
                        a set of numbers. The user can decide the size of this set when the program runs. Your 
                        program must find the highest and lowest number in the set and display both to standard 
                        output.
                        Write a C program to implement the above requirements. You can ignore errorchecking.
                        (18 marks)
                        (b) Show how you would modify your program in part (a) to enable the user to enter a 
                        different size set of numbers after the initial set is entered.
                        (8 marks)



Author: Eman Abdelatti

Date: 04/12/2023

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *ptr;
    int numbers = 0;
    int no_bytes = 0;
    int highest = 0;
    int lowest = 0;
    //elements for the realloc()
    char answer = 'n'; 
 	int extra_data = 0; 
 	int new_block_size = 0;


    //This printf and scanf statement is to ask the user how many numbers they're entering and 
    printf("\nHow many numbers are you entering?\n");
    scanf("%d", &numbers);

    // Calculate the number of bytes required to store the set of numbers in memory
    no_bytes = numbers * sizeof(int);

    // Allocate the block of memory required
    ptr = malloc(no_bytes);

    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
    } // end if

    else // memory allocated successfully
    {
        // memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", numbers);

        // Enter data items into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            scanf("%d", & *(ptr + i));
        } // end for

        printf("\nYou entered:\n");
        // Display the data items entered into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            printf("%d\n", *(ptr + i));
        } // end for
        
    } // end else

    // assume the highest number in the memory block is the first number in that block
   		highest = *ptr;

        // assume the lowest number in the memory block is the first number in that block
        lowest = *ptr;


        // Find the highest and lowest number in the allocated memory
        for(i = 0; i < numbers; i++)
   		{ 
     		if (highest < *(ptr + i))
            {
                highest = *(ptr + i);
            }

            if (lowest > *(ptr + i))
            {
                lowest = *(ptr + i);
            }

   		} // end for 

        printf("\n\nThe highest is %d, lowest is %d", highest, lowest);



        // clear the input buffer
        while(getchar() != '\n');

        

        //realloc()
        //Part 6 
   		//Ask the user if they wish to enter additional numbers 

   		printf("\nEnter more numbers (y/n)\n"); 

   		//scanf("%c", & answer); 
        answer = getchar();

        

   		//Check answer 
   		if(answer == 'n') 
   		{ 
     		printf("\nNo changes - memory block remains the same\n"); 

            free(ptr);
            
   		} // end if

        else 
   		{   
     		printf("\nHow many extra numbers to enter?\n"); 

     		scanf("%d", &extra_data); 

            
     		// Calculate the total size of the new memory block needed to store the extra data 
     		new_block_size = (numbers + extra_data) * sizeof(int); 

     		//change the size of the allocated memory block to include the extra numbers 
     		ptr = realloc(ptr, new_block_size); 

            
     		//Check if the memory can be expanded 
     		if(ptr == NULL) 
     		{ 
       			printf("\nFailed to EXPAND memory block for new data\n"); 

     		} // end if 
     		else 
     		{ 
       			printf("\nEnter the additional data items\n"); 

       			// Enter data items into the allocated memory block 
       			for(i = numbers; i < numbers + extra_data; i++) 
       			{ 
         			scanf("%d", & *(ptr + i)); 

       			} // end for 

       			printf("\nYour memory block contains:\n"); 

       			// Display the data items entered into the re-allocated memory block 
       			for(i = 0; i < numbers + extra_data; i++) 
       			{ 
         			printf("%d\n", *(ptr + i)); 

       			} // end for 

                // Find the highest and lowest number in the allocated memory
                for(i = 0; i < numbers + extra_data ; i++)
                { 
                    if (highest < *(ptr + i))
                    {
                        highest = *(ptr + i);
                    }

                    if (lowest > *(ptr + i))
                    {
                        lowest = *(ptr + i);
                    }

                } // end for 

                printf("\n\nThe highest is %d, lowest is %d", highest, lowest);

     		} // end else (if ptr == NULL)

   		} // end else (if answer == 'n')

        free(ptr);

    return 0;
}