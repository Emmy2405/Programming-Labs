/*

Program Description: Lab Test 1 . This program asks the user to enter a number between 1 - 25. 
The program will randomly generate a number between 1 - 25 and compare the two numbers. 
The program will run 5 times  It will then state whether the number is correct, too hight or too low . At the end 
it will print of the users guess history and should stop once the user has guessed the correct number.


Author: Eman Abdelatti

Date: 28/11/2023

*/

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

#define MAX_ATTEMPTS 5

int main()
{
    int num = 0;
	int guessHistory[MAX_ATTEMPTS];
    int attempts = 0;
	int i = 0;


    do//beginning of do..while loop
	{
		printf("\n\nGuess %d", i+1);//print statement for the guess round
		printf("\nEnter a number between 1 to 25:\n");
		scanf("%d", &attempts);//where the user enters in a random number between 1 and 25

        printf("\nGenerating a random number between 1 to 25");
    
		// seed the random number generator with a range 0 – large number
		srand(time(NULL));

         // num is assigned a random number between 1 – 10 
        num = (rand() % 25) + 1;

        // displaying the random number generated
		printf("\nRandom number generated is %d ", num);


		if(attempts == num)//beginning of if statement
		{
            //this if statement is to state whether if the number entered is correct
			printf("\nCorrect Guess");
            //this if statement is for if the number guessed is correct as the one generated
            break;
		} // end if
        

        if (attempts > num)//beginning of if statement
        {
            //this if statement is to state whether the number is too high to the users guess
            printf("\nToo High");
        }//end of if statement


        if (attempts < num)//beginning of if statement
        {
            //this if statement is to state whether the number is too low to the users guess
            printf("\nToo Low");
        }//end of if statement

        guessHistory[i] = attempts;//to store the user history in the array

        i++;//increment the i

    }//end of do 
    while(i < 5);//while statement


    printf("\n\nEnd Game.The numbers you guessed were:");//to print off the users history


    for ( i = 0; i < MAX_ATTEMPTS; i++)//beginning of for loop
    {
        // Display the guess history of numbers that the user has entered
        printf("\n%d", guessHistory[i]);
    }//end of for loop

    return 0;

}