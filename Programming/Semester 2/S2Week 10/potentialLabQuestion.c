#include <stdio.h>
#include <string.h>

#define LENGTH 7
#define MAX_ATTEMPTS 7

// Function signature
int checkGuess(char[], char);

int main()
{
    char word[LENGTH] = "coding";
    char guessedWord[LENGTH];
    int attempts = MAX_ATTEMPTS;
    

    // Initialize the guessedWord array with underscores
    //
    for (int i = 0; i < strlen(word); i++)
    {
        guessedWord[i] = '_';
    }

    // Place the NULL character in the last element in the guessedWord array
    //
    guessedWord[strlen(word)] = '\0';
    

    printf("Welcome to Guess the Word game!\n\n");

    // User has a maximum 7 guesses
    //
    while (attempts > 0)
    {
        char guess;

        
        printf("\nEnter your guess (single character): ");
        scanf("%c", &guess);

        // Clear input buffer
        //
        while(getchar() != '\n');

        // call function checkGuess() to check if the guessed character is in the word, i.e., "coding"
        //
        if (checkGuess(word, guess) == 1)
        {
            // Update guessedWord array with correctly guessed characters
            //
            for (int i = 0; i < strlen(word); i++)
            {
                if (word[i] == guess)
                {
                    guessedWord[i] = guess;
                }
            }

            printf("\n%c is present in the word here: %s\n", guess, guessedWord);

            // if the user correctly guesses the word, i.e., "coding", break out of the while loop and end the program
            //
            if (strcmp(word, guessedWord) == 0)
            {
                printf("\nCongratulations! You guessed the word: %s\n", word);

                // exit the loop and end the program
                //
                break;
            }
        }
        else // if the user INCORRECTLY guesses a character in the word
        {
            printf("%c is not present in the word.\n", guess);

            // Decrement the number of attempts
            //
            attempts--;
            
            printf("Attempts left: %d\n", attempts);

            // if all guess attempts exhausted, end program
            //
            if (attempts == 0)
            {
                printf("\nSorry, you've run out of attempts. The word was: %s\n", word);
                break;
            }
        }
    }

    return 0;
}


int checkGuess(char word[], char guess)
{
    int len = 0;

    // Get the length of the word to be guessed, i.e., "coding"
    //
    len = strlen(word);
    
    for (int i = 0; i < len; i++)
    {
        // if the guessed character IS in the word
        //
        if (word[i] == guess)
        {
            // Exit the function and immediately return 1 if the guessed character IS in the word
            //
            return 1;
        }
    }

    // return 0 if the guessed character is NOT in the word
    //
    return 0;
    
} // end checkGuess()