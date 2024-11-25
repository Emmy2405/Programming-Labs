//johns code
#include <stdio.h>

#define SIZE 20

int main()
{
    // Declaration of variables
    int i;
    int option = 0;
    int input = 0;
    int num1 = 0;
    int num2 = 1;
    int t = 0;
    int fibonacci[SIZE] = {0};
    int total = 0;
   

    // Do While loop to ensure, program runs at least once
    do 
    {
        // Print Statement to prompt user for choice
        printf("\nPlease Pick an option:\n");
        printf("\n1. Enter the number of terms to calculate in the sequence and display\n");
        printf("\n2. End Program\n");

        // Scanf to store users choice input
        scanf("%d", &option);

        // If block for when user enters 1
        if (option == 1)
        {
            // Reassignments to reset after each iteration
            int total = 0;
            int num1 = 0;
            int num2 = 1;
            int t = 0;

            // For loop to calculate and store Fibonacci sequence in an array
            for (i = 0; i < SIZE; i++)
            {
                // This line of code stores each value of the fibonacci sequence in an array
                *(fibonacci + i) = num1;

                // Calculations and reassignments of variables
                t = num1 + num2;
                num1 = num2;
                num2 = t;
            } // End For

            // Print Statement to ask user for a number to add values within the array up until
            printf("\nPlease enter a value to add elements up until:\n");

            // Scanf to store user input
            scanf("%d", &input);

           

            // While loop to account for inputs greater than 20
            while (input > 20)
            {
                // Print Statement for invalid inputs
                printf("\nInvalid Input entered\n");

                // Print Statement to prompt another input
                printf("\nPlease Enter a valid input:\n");

                // Scanf to store user input
                scanf("%d", &input);
            } // End While

           

           // Print Statement to create a space between input and display of array
           printf("\n\n");

            // For loop to calculate the sum of n numbers
            for (i = 0; i < input; i++)
            {
                // Calculations
                total = total + *(fibonacci + i);
               
                // If block to print all terms except for last
                if (i < input - 1)
                {
                    printf("%d, ", *(fibonacci + i));
                } // End If

                // Else block to print the last term
                else
                {
                    printf("%d", *(fibonacci + i));
                } // End Else
            } // End For

            // Print Statement to print total to standard output
            printf("\n\nThe sum of the first %d numbers in the Fibonacci sequence is %d\n", input, total);

        } // End If

        // If block for when user enters 2
        if (option == 2)
        {
            // Error checking to see if the user is sure they would like to end the program
            printf("\n\nAre you sure you would like to end the program?");
            printf("\n1: No");
            printf("\n2: Yes");
            scanf("%d", &option);
           
            // If block for when user enters 1
            if (option == 1)
            {
                // Print Statement to tell user that the program has not ended
                printf("\nWelcome back to the Fibonacci Sequence\n");
            } // End If

            // If block for when user enters 2
            if (option == 2)
            {
                // Print Statement to tell user that the program has ended
                printf("\nEnd of Program\n");
            } // End If
           
        } // End If
    }
    while (option != 2); // End Do While
   
    return 0;
} // End Main


//Actual code

/*
Lab Test #1

Program that asks the user to enter a number and will display the Fibonacci sequence up to
that number of terms. e.g. 0,1,1,2,3,5,8,13,21,......

The program will display a simple menu, which will contain an option to end the program.

Dr. Michael Collins

*/
#include <stdio.h>

int main()
{
	int option = 0;
	int num1 = 1;
	int num2 = 0;
	int temp = 0;
    int i = 0;
	int term_number = 0;


	// continuously display the menu and run the program unti the user selects option 2
	//
	do
	{
		// Display the menu
		//
		printf("\n\nThe Fibonacci Series program\n\n");
		printf("Enter your selection\n\n");
		printf("1. Enter the number of terms to display in the sequence.\n");
		printf("2. End Program\n");
		
		scanf("%d", &option);
		
		// Clear the buffer to ignore the "Enter" key used to select the menu option
		//
		while(getchar() != '\n');
		
		// if the user selects a term to display the sequence
		//
		if (option == 1)
		{
			
			// re-initialise the contents of these variables to display the sequence again for a different no. of terms
			//
			num1 = 1;
			num2 = 0;
			temp = 0;

			// Enter the number of terms in the sequence to display
			//
			printf("\nEnter your upper range number in the sequence\n");
    		scanf("%d", &term_number);
    		
    		// display all numbers in the sequence up to this number of terms
			//
    		printf("0, ");
    
    		for(i = 0; i < term_number; i++)
			{
				temp = num1 + num2;
				num1 = num2;
				num2 = temp;

				// the value of variable temp displays the next number in the sequence
				//
				if (i != term_number -1)
				{
					// Display a comma after the sequence term being displayed as there is another number
					// to follow
					printf("%d, ", temp);
				}
				else
				{
					// Display the last number in the sequence up to n terms WITHOUT a comma following it
					printf("%d", temp);
				}
				
				//printf("%d, ", temp);

			} // end for
			
		} // end if option = 1
		
		// if the user wishes to end the program
		//
		if (option == 2)
		{
			printf("\n\n Program Ended");
			
		} // end if option = 2
		
	} // end do
	while (option != 2);
	
	return 0;