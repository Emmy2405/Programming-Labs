/*
Program Description: This is CA for Semester 2. 
                     This program is a word guessing game.
                     The program prompts the user to guess the characters in the word "coding" 
                     and the program should tell the user whether that character is present in the word or not.
                     If the user guesses all the characters correctly ,then the game is ended and the user wins.
                     The user is only allowed to make 7 wrong charcter guesses and if they run out of guesses 
                     the game is ended, the user loses and the word is revealed.

Author: Eman Abdelatti

Date: 09/04/2024

*/

//Header Files
#include <stdio.h>
#include <string.h>

//Symbolic Names
#define SIZE 7 

//Function Calls
int Comparingguess(char [], char , int);//function to see if the character guessed is in the word

int main()
{//beginning of main

    //decalring varaibles
    char correctword[SIZE] = "coding";//string array for the word that the user has to guess
    char guesses[SIZE];//string array for the  redacted version of the word 'coding'
    int wrongAttempts = SIZE;// the amount of incorrect guesses the user is allowed to make
    char attempts;//the attempts that the user makes
    int length = 0;//used to measure the length of the variable 'correctword'
    int i;


    //printf statements for the beginning and introduction of the game
    printf("\n----------------------------------------------------------------------------------------------------------------");
    printf("\nWelcome to the Word Guessing Game!");
    printf("\nIn this game you have to guess each character of a secret word which will be revealed in the end!");
    printf("\nYou can guess correctly as many times as you want but be careful because you can only guess incorrectly 7 times.");
    printf("\nIf you guess incorrectly 7 times you lose and the word is revealed. Good Luck!");
    printf("\n----------------------------------------------------------------------------------------------------------------");

    //measuring the length of the correct word to use it  the for loops in the Comparingguess function and the main function
    length = strlen(correctword);
    

    //for loop to fill the redacted version of the word 'coding' with underscores '_'
    for ( i = 0; i < length; i++)
    {//beginning of for loop

        //filling the string array with underscores '_'
        guesses[i] = '_';

    }//end of for loop


    //placing the last element in the array with a NULL character so the program doesn't place in a '\n' instead and mess up the game
    guesses[length] = '\0';

    //while the wrongAttempts are greater than 0
    while(wrongAttempts > 0)
    {//beginning of while loop

        //printf statement to ask the user to enter in the character they would like to guess 
        printf("\nPlease enter the single character you would like to guess:\n");
        scanf("%c", &attempts);//scanf for the user to enter in their guess

        //while loop for clearing the buffer so the program doesn't take the backslash as a character
        while(getchar() != '\n');

        //if statement for if the user has guessed a correct character and the Comparingguess function  returns a 1
        if(Comparingguess(correctword, attempts, length) == 1)//where the Comparingguess function is called
        {//beginning of if statement

            //for loop for if the finding where the correct character guessed is in the correctword variable and placing it there
            for ( i = 0; i < length; i++)
            {//beginning of for loop

                //if the correct guessed character is in the word 'coding'
                if(correctword[i] == attempts)
                {//beginning of  inner if statement
                
                    //finging the location of the correct guess in the redacted version of the word and placing it there
                    guesses[i] = attempts;

                }//end of  inner if statement

            }//end of for loop


            //printf statement to tell the user that they have guessed correctly
            printf("\nCorrect guess! %c is located here: %s\n", attempts, guesses);

            //comparing the redacted word of the word  with the  correct word 'coding' to see if they match and the user has guessed all the characters correctly
            if(strcmp(correctword, guesses) == 0)
            {//beginning of inner if statement

                //printf statement to inform the user that they have guessed correctly and have won the game
                printf("\nCongratulations! You have won the game! You guessed the word: %s\n");
                break;//break statement to end the program and exit the loop

            }//end of inner if statement
            
        }//end of if statement
        else//if the user has entered in an incorrect guess
        {//beginning of else statement

            //decrementing the wrongAttempts variable because they have guessed incorrectly and have lost and attempt
            wrongAttempts = wrongAttempts - 1;

            //printf statement to inform the user that they have guessed incorrectly and how many attempts they have left in the game
            printf("\n%c is not in the word. Attempts remaining:%d\n", attempts, wrongAttempts);

            //if the user has used up all their attempts
            if(wrongAttempts == 0)
            {//beginning of if statement

                //printf statement to inform the user that they have no more attempts and have lost the game
                printf("\nGame over, you have run out of attempts. The correct word is: %s\n", correctword);
                break;//break statement to end the program and exit the loop

            }//end of if statement

        }//end of else statement

    }//end of while loop

    return 0;//returning 0 to end the program

}//end  of main

//function to see if the character guessed is in the word
int Comparingguess(char answer [], char guess , int length)
{//beginning of Comparingguess function

    //declaring variables
    int i ;


    //for loop to check if the character guessed is in the word
    for ( i = 0; i < length; i++)
    {//beginning of for loop

        //if statement for if the character is present in the word
        if(answer[i]== guess)
        {//beginning of if statement

            //if the character is present in the word , we return 1 for success
            return 1;

        }//end of if statement

    }//end of for loop
    

    //we return 0 if the character is not present in the word
    return 0;
    
}//end of Comparingguess function