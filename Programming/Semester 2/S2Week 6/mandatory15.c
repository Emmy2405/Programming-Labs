/*

Program Description: Program to get the user to enter in 2 strings and compare them to see if they're the same. 
                     then you measure the length of the string in one function and concatenate the string in another function

Auhtor: Eman Abdelatti

Date: 27/02/2024

*/

#include <stdio.h>
#include <string.h>

#define SIZE 30

int main()
{
    //declaring variables
    char string1[SIZE];
    char string2[SIZE];
    char string3[SIZE] = "First word entered is: ";
    int result = 0;
    int length = 0;


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

        printf("\nYour 2 strings are the same!\n");

    }//end of if statement
    else//if the strings aren't the same
    {//beginning of else statement

        printf("\nYour 2 strinngs are different\n");

    }//end of else statement

    //joins the third and the first string together
    strcat(string3, string1);

    //prints off the joint strings
    printf("\n%s", string3);

    //measures the length of the joint strings
    length = strlen(string3);

    //prints off the length
    printf("\n\nThe length of the concatenated string is:%d\n", length);

    return 0;
}                                                                                                                                                                                        