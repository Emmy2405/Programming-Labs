/*
Program Description: print out a character the amount of times you would like 

Author: Eman Abdelatti

Date: 30/01/2024

*/

#include <stdio.h>

void function_name(char, int);

int main()//beginning of main() function
{
    int number = 0;
    char character = 0;

    printf("What character would you like to enter?\n");
    scanf("%c", &character);

    printf("\nHow many times would you like to display the character?\n");
    scanf("%d", &number);

    function_name(character, number);

    return 0;
}//end of main() function

void function_name(char var, int num)//beginning of function_name() function
{
    int i;


    for(i = 0; i< num; i++)
    {
        printf("%c", var);
    }

}//end of function_name() function