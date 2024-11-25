/* Lab Test 1

Lab Test 1
This program asks the user to enter a number between 1 - 10. 
The program will randomly generate a number between 1 - 10 and compare the two numbers. 
The program will execute 5 times and keep a counter of the number of times the numbers were the same and different. 
Both of these are displayed at the end of the program.

Author: MC
Date: November, 2022
*/

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h>

int main()
{
	int num = 0;
	int guess = 0;
	int correct_guess = 0;
	int incorrect_guess = 0;
	int i = 0;


	// Play the game, i.e. loop 5 times
	//
	do//beginning of do..while loop
	{
		printf("\n\nGuess %d", i+1);//print statement for the guess round
		printf("\nEnter a number between 1 - 10: ",guess );
		scanf("%d", &guess);//where the user enters in a random number between 1 and 10


		printf("\nGenerating a random number between 1 to 10");
    
		// seed the random number generator with a range 0 – large number
		srand(time(NULL));
		
		// num is assigned a random number between 1 – 10
		num = rand() % 10 + 1;
    
		// display the random number generated
		printf("\nRandom number generated is %d ", num);
	

		// Check if the users guess is the same as the random number generated
		if(guess == num)//beginning of if statement
		{
			printf("\nSame numbers");
            //this if statement is for if the number guessed is correct as the one generated
			// Increment the counter for the correct numbers
			correct_guess++;
		} // end if
		else//beginning of else statement
		{
			printf("\nDifferent numbers");
		
			// Increment the counter for the wrong numbers
            //this if statement is for if the number guessed is incorrect and not the same as the one generated
			incorrect_guess++;
		} // end else
		
		// increment the loop counter
		i++;
		
	} // end do
	while(i < 5);//while statement 
    
    // Display the number of times the numbers were the same or different
    printf("\n\nThe numbers were the same %d times", correct_guess);
    printf("\n\nThe numbers were different %d times\n\n", incorrect_guess);
    	
    return 0;

} // end main
