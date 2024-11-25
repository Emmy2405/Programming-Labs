/*
Program Description:This program is asks for the users name and compares it to a list of names in an array. 
                    If the users name is in the list it displays a suitable greeting otherwise displays the message 'name not found' 

Author: Eman Abdelatti

Date: 27/02/2024

*/

#include <stdio.h>
#include <string.h>

#define SIZE 25
#define SIZE2 10

int main()
{
    //declaring variables
    char name[SIZE];
    char *names_list[SIZE2] = {"Amy", "Lily", "Susie", "Lucy", "Emily", "Ben", "Sam", "Luke","James", "Tom"};
    int i = 0;


    //where the user is asked to enter in their name
    printf("\nPlease enter your name:\n");
    gets(name);


    //for loop to compare the names to the array name list
    for(i = 0; i < SIZE2; i++)//beginning of for loop
    {
        //where we compare the names
        if(strcmp(name, names_list[i]) == 0)//beginning of if statement
        {
            printf("\nYay! Your name is on the list!");
            return 0;

        }//end of if statement
        
    }//end of for loop

    printf("\nSorry, name not found");
    
    return 0;

}