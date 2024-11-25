/*
Program Description:

Author: Eman

Date:

*/

#include <stdio.h>

#define SIZE 6

int main()
{
    //declaring the variables
    char word[SIZE] = {'h', 'e', 'l', 'l', 'o','\0'};//initialising each element of the array with a specific character
    char word1[SIZE] = {'h', 'e', 'l', 'l', 'o'};//initialising each element of the array with a specific character
    char word2[SIZE] = "Hello";// initialise the array automatically with a string in double-quotes


    //where the words are printed
    puts(word);
    puts(word1);
    puts(word2);

    return 0;
}