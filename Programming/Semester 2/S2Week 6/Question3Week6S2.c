/*

Program Description: program to get the user to enter in 2 strings and compare them to see if they're the same

Auhtor: Eman Abdelatti

Date: 27/02/2024

*/

#include <stdio.h>
#include <string.h>

#define SIZE 25

int main()
{
    //declaring variables
    char string1[SIZE];
    char string2[SIZE];
    int result = 0;


    //where the user enters their first string
    printf("\nPlease enter in your first string:\n");
    gets(string1);

    //where the user enters in the second string
    printf("\nPlease enter in your second string:\n");
    gets(string2);

    //where the 2 strings are compared
    result = strcmp(string1, string2);

    if(result == 0)//if the strings are the same
    {//begininng of if statement

        printf("Your 2 strings are the same!");

    }//end of if statement
    else//if the strings aren't the same
    {//beginning of else statement

        printf("Your 2 strinngs are different");

    }//end of else statement

    return 0;
}