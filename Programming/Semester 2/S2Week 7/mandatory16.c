/*
Program Description:

Author: Eman Abdelatti

Date: 05/03/2024

*/

//header files
#include <stdio.h>
#include <string.h>

//symbolic names
#define SIZE 50

//function signatures
void comparison(char []);
void frequency (char[]);


int main()
{
    //declaring variables
    char str[SIZE];


    //where the user enters in their string
    printf("\nPlease enter in your string:\n");
    fgets(str, SIZE , stdin);
    //scanf("%s", str);

    // Remove the newline character from the input string
    if (str[strlen(str) - 1] == '\n')//this line checks  the last character of the string. we use the strlen() to return the length of the string. the == '\n' part checks if the last character is a newline character
    {
        //This line replaces the newline character at the end of the string with a null terminator and so removes the newline character
        str[strlen(str) - 1] = '\0';
    }

    //calling function to compare the string entered to another string
    comparison(str);

    //calling function to determine the frequency of the string 'is'
    frequency(str);

    return 0;
}

//the function where the string entered is being compared to another string
void comparison(char mystr[])//beginning of function
{
    //declaring variables
    char str1[SIZE] = "Hello World";
    int result = 0;


    //checking if the 2 strings are the same
    result = strcmp(str1, mystr);
    
    if(result == 0)//beginning of if statement
    {
        //what the program prints if the 2 words are the same
        printf("\nThe 2 strings are the same");

    }//end of if statement
    else//beginning of else statement
    {
        //what the program prints if the 2 words aren't the same
        printf("\nThe 2 strings are not the same");

    }//end of else statement

}//end of comparison()

//function to determine the frequency of the string 'is'
void frequency(char str[])//beginning of frequency() function
{
    //declaring variables 
    int lengthstr = 0;   
    int lengthword = 0;
    char word[SIZE] = "is";
    int count = 0;
    int i = 0;
    int j = 0;
    char InStr = ' ';
    char InWord = ' ';


    //measuring the length of the strings
    lengthstr = strlen(str);
    lengthword = strlen(word);

    for (int i = 0; i <= lengthstr - lengthword; i++)//beginning of for loop
    {

        // Check if the current substring matches the word
        for (j = 0; j < lengthword; j++)//beginning of inner for loop
        {
            InStr = str[i + j];//The character from str is determined by the sum of i and j indices and stored in the variable InStr. 
            InWord = word[j];//The character from word is determined by the j index and stored in the variable InWord.

            // Manually convert characters to lowercase for comparison
            if (InStr >= 'A' && InStr <= 'Z') 
            {
                InStr += 32;
            }
            // Manually convert characters to lowercase for comparison
            if (InWord >= 'A' && InWord <= 'Z') 
            {
                InWord += 32;
            }

            if (InStr != InWord) 
            {
                break;
            }
        }

        // If the substring matches the word, increment the count
        if (j == lengthword) 
        {
            count++;
        }
    }
    //print the count
    printf("\nThe frequency of the word 'is': %d\n", count);

}//end of frequency() function