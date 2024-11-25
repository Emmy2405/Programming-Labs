/*
Program Description: Write a C program that reads a string from standard input and uses separate
                    functions to  count the number of times a vowel occurs in the sentence,
                    find the number of characters in the string you entered (use a string function).
                    Using this number, display the string in reverse.
                    Concatenate the string you entered to the end of the following string and display
                    the new string: char sentence[40] = “I entered the string ”

Author: Eman Abdelatti

Date: 05/03/2024

*/

//header files
#include <stdio.h>
#include <string.h>

//symbolic names
#define SIZE 21

//function calls
void vowels(char []);//function to count the number of vowels in the string
void characters(char []);//function to measure the length of the string and to diplay it in reverse
void concatenate(char []);//function to concatenate the string entered

int main()//beginning of main function
{
    //declaring variables
    char str1[SIZE];


    //where the user is asked to enter in the string
    printf("\nPlease enter in your string:\n");
    fgets(str1, SIZE, stdin);

    // Remove the newline character from the input string
    if (str1[strlen(str1) - 1] == '\n')//this line checks  the last character of the string. we use the strlen() to return the length of the string. the == '\n' part checks if the last character is a newline character
    {
        //This line replaces the newline character at the end of the string with a null terminator and so removes the newline character
        str1[strlen(str1) - 1] = '\0';
    }

    //calling on functions
    vowels(str1);
    characters(str1);
    concatenate(str1);

    return 0;

}//end of main function

void vowels(char str1[])//function to count the number of vowels in the string
{//beginning of vowels function
    //declaring variables
    int count = 0;
    int i;


    for(i=0; i < SIZE; i++)//for loop to count the number of vowels in string
    {//beginning of for loop

        if(str1[i] == 'a' || str1[i] == 'A')//if character is == vowel a or A
        {//beginning of if statement

            count++;

        }//end of if statement
        if(str1[i] == 'e' || str1[i] == 'E')//if character is == vowel e or E
        {//beginning of if statement

            count++;

        }//end of if statement
        if(str1[i] == 'i' || str1[i] == 'I')//if character is == vowel i or I
        {//beginning of if statement

            count++;

        }//end of if statement
        if(str1[i] == 'o' || str1[i] == 'O')//if character is == vowel o or O
        {//beginning of if statement

            count++;

        }//end of if statement
        if(str1[i] == 'u' || str1[i] == 'U')//if character is == vowel u or U
        {//beginning of if statement

            count++;

        }//end of if statement

    }//end of for loop

    //printing off the number of vowels
    printf("\n\nThe number of vowels in the string entered is:%d", count);

}//end of vowels function

void characters(char str1[])//function to measure the length of the string and to diplay it in reverse
{//beginning of characters function
    //declaring variables
    int length  = 0;


    //measuring the length of the string
    length = strlen(str1);

    //printing off the length of the string
    printf("\nThe length of the string is: %d\n", length);

    for(int i = length -1; i >=0; i--)//for loop to print of the string in reverse order using the length
    {//beginning of for loop

        printf("%c", str1[i]);//printing off the characters

    }//end of for loop

}//end of characters function

void concatenate(char str1[])//function to concatenate the string entered
{//beginning of concatenate function
    //declaring variables
    char sentence[40] = "I entered the string ";


    //concatenating the string
    strcat(sentence, str1);

    //printing off the  new string 
    printf("\n%s", sentence);

}//end of concatenate function