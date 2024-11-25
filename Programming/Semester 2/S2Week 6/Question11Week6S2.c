/*

Program Description: Write a program to input a character and display the capital city of that country

Author: Eman Abdelatti

Date: 27/02/2024

*/

#include <stdio.h>
#include <string.h>

#define SIZE 10

int main()
{
    //declaring variables
    char *country[SIZE] = {"Australia","Belgium", "China", "Denmark", "England", "France", "Greece", "Ireland", "Scotland", "Wales"};
    char *city[SIZE] = {"Canberra","Brussels", "Beijing", "Copenhagen", "London", "Paris", "Athens", "Dublin", "Edinburgh", "Cardiff"};
    char input[50];
    int i;


    //where the user enters in their country
    printf("\nPlease enter a country from the list of 10 above:\n");
    gets(input);

    input[strcspn(input, "\n")] = '\0';  // Remove the newline character

    for (i = 0; i < SIZE; i++)
    {//beginning of for loop

        //compares country with city
        if (strcmp(input, country[i]) == 0)
        {//beginning of if statement
    
            printf("\nThe capital city of %s is %s.\n", country[i], city[i]);
            return 0;

        }//end of if statement

    }//end of for loop

    //when user enters in a country that's not on the list
    printf("\nCountry is not on the list.\n");
    
    return 0;
}
