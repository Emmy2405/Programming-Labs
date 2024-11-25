/*

Program Description: 

Program for a word guessing game (Hangman),
User gets 7 attempts to guess the word 'coding',
after each correct guess their current progress 
is displayed and after each incorrect guess the
user is shown their remaining attempts. If the user
guesses all letters in the word or if they run out of 
guesses the game ends. 

Author: John Patacsil - C23380086

Date: 09/04/24

*/

// 1. Header Files
#include <stdio.h>
#include <string.h> // Header file for strings


// 2. Symbolic Names
#define SIZE 7 // Length for strings
#define NUM_GUESS 7 // Number of attempts allowed


// 3. Structure Templates (none used)


// 4. Function Signatures (Method Prototype)
int enterGuess (char[], char);


int main()
{
	// Declaration of variables
    char word[SIZE] = "coding";
    char letter = ' ';
    int i;
    char guessedWord[SIZE];
    int attempts = NUM_GUESS;

    // Get length of string to be guessed (without '\0')
    int len = strlen(word);

    // Fill guessed word with '_'
    for (i = 0; i < len; i++)
    {
        guessedWord[i] = '_'; 
    } // End For

    // Pull '\0' at end of Guessed Word
    guessedWord[strlen(word)] = '\0';

    // Print Rules
    printf("Guessing Game: You get %d guesses to guess this word: %s\n\n", attempts, guessedWord);

    // While user still has attempts left
    while (attempts > 0)
    {
        // Prompt User input
        printf("\nEnter a Guess Letter (lowercase): ");
        scanf("%c", &letter);

        // Clear input buffer
        while(getchar() != '\n');

        // If user enters a correct letter
        if (enterGuess(word, letter) == 1)
        {
            // Find where guess letter goes in word
            for (i = 0; i < len; i++)
            {
                if (word[i] == letter)
                {
                    // Put guess letter in correct space
                    guessedWord[i] = letter;

                    // Display current guessed word progress
                    printf("\nCorrect Guess, It is located here: %s\n\n", guessedWord);
                } // End If
            } // End For
        } // End If

        // If User Guess is wrong
        else
        {  
            // Decrement number of attempts left
            attempts--;

            // Display to user that guess is wrong
            printf("%c is not in the word. Attempts remaining: %d\n\n", letter, attempts);
        } // End Else

        // Check if user has guessed the full word correctly
        if (strcmp(word, guessedWord) == 0)
        {
            // Tell User that they won
            printf("Congratulations, You Win!, Word was: %s\n", word);

            // Print attempts remaining 
            printf("\nYou had %d attempts remaining\n", attempts);

            // Exit for loop
            break;
        }
    } // End For


    // If user uses all guesses and fails to get word
    if (attempts == 0)
    {
        printf("\n\nGame Over, you have run out of attempts. The Correct word is: %s\n\n", word);
    } // End If


	// End Program
	return 0;
} // End Main


// Function to check if guess letter is correct
int enterGuess(char string[], char guess)
{
    // Reinitialise len 
    int len = strlen(string);

    // For loop to check if guess appears in string
    for (int i = 0; i < len; i++)
    {
        // If guess letter is in string 
        if (string[i] == guess)
        {
            return 1; // Exit function 
        } // End If
    } // End For

    // If guess letter not in string 'word'
    return 0; 
} // End Function