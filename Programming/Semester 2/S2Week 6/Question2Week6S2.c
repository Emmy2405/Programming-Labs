/*

Program Description: program where you enter in a sentence. you measure the length of that sentence in one function
                     and append the sentence to the sentence 'my sentence is...' in another function.

Author: Eman Abdelatti

Date: 27/02/2023

*/

#include <stdio.h>
#include <string.h>

#define SIZE 70

int main()
{
    //declaring variables
    char sentence[SIZE];
    int i = 0;
    int length = 0;
    char str1[SIZE] = "My sentence is: ";


    printf("\nPlease enter in your sentence:\n");
    gets(sentence);

    //measuring the length of the string
    length = strlen(sentence);

    printf("\nThe length of the sentence is:%d", length);

    //appending the str1 string to the sentence string
    strcat(str1, sentence);

    //printing out the new  joint string
    printf("\n%s", str1);

    return 0;

}