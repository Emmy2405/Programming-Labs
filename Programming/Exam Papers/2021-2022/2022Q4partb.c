/*
Program Description:(b) Write a C program that asks the user to enter a string. The string may contain more than 
                    one word with a maximum of 30 characters.
                    Your program should check for the number of occurrences of the word “is” and display 
                    this number to standard output as follows:
                    The word “is” occurs x times.
                    (18 marks)

Author: Eman Abdelatti

Date: 25/04/2024


*/

#include <stdio.h>
#include <string.h>

#define SIZE 30
#define IS "is"

int main() {
    char string[SIZE];
    int occurrence = 0;

    printf("\nPlease enter a string (30 characters max.):\n");
    fgets(string, SIZE, stdin);

    printf("The string you entered is: %s", string);

    // Calculate the length of the string
    int length = strlen(string);

    // Loop through the string to find occurrences of "is" and "Is"
    for (int i = 0; i < length - 1; i++) 
    {
        if ((strncmp(&string[i], IS, 2) == 0 || strncmp(&string[i], IS, 2) == 0) && (string[i + 2] == ' ' || string[i + 2] == '\0' || string[i + 2] == '\n')) 
        {
            occurrence++;
        }
    }

    printf("The word \"is\" occurs %d time(s)\n", occurrence);

    return 0;
}