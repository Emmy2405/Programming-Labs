/*

Program Description: Program to get the user to enter in 2 strings and compare them to see if they're the same. 
                     then you measure the length of the string in one function and concatenate the string in another function

Auhtor: Eman Abdelatti

Date: 27/02/2024

*/

// Header Files
#include <stdio.h>
#include <string.h>

// Symbolic Names
#define SIZE 50 // Give 49 elements + "\0"


// Function Signatures
void length_count (char[]);
void concatenate (char[]);


int main()
{
    // Declaration of variables
    char word1[SIZE];
    char word2[SIZE];
    int result = 0;

    // Prompt user for input
    printf("\nPlease enter your first word:\n");
    // Must use scanf this time to avoid "\n" character
    scanf("%s", word1);

    printf("\nPlease enter your second word:\n");
    scanf("%s", word2);

    // NB: if scanf("%s") is used, then spaces will not be end the string
    // If fgets is used then a "\n" will be counted as part of the string

    // Check if the words are the same
    result = strcmp(word1, word2);

    // Print message accordingly
    if (result == 0)
    {
        printf("\nWords are the same\n");
    } // End If
    else 
    {
        printf("\nWords are NOT the same\n");
    } // End Else

    // Call function to concatenate first word to end of given string and find the length of the new string
    concatenate(word1);

    // End Program
    return 0;
} // End Main


// Function to concatenate first word to end of given string and pass the new string
void concatenate (char phrase[])
{
    // Give starter string 49 elements + "\0"
    char starter[SIZE] = "First Word entered is ";

    // Concatenate strings together
    strcat(starter,phrase);

    // Print back concatenated string
    printf("\n%s\n", starter);

    // Call funtion to find length of a string and pass concatenated string
    length_count (starter);

} // End Function

// Function to find length of an inputted string 
void length_count (char new_string[])
{
    // Since strlen() returns an size_t unsigned int
    int word_length = 0;

    // Find length of word1 (without enter key or null character counted)
    word_length = strlen(new_string);

    printf("\nThis string has %zu characters in it\n", word_length);
} // End Function