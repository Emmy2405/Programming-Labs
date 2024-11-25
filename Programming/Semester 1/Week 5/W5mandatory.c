/*

Program Description: This program is about using a switch statement to ask the user to enter a character from standard input 
                     and displays a message where the character is a vowel or not

Author: Eman Abdelatti

Date: 17/10/2023

*/
#include <stdio.h>

int main()
{
    char vowel;


    printf("\nPlease enter a character");
    scanf("%c", &vowel);

    //This is the beginning of the switch statement
    switch (vowel)
    { 
        case 'A' : 
        case 'a' :
        case 'E' :
        case 'e' :
        case 'I' :
        case 'i' :
        case 'O' :
        case 'o' :
        case 'U' :
        case 'u' ://if oper == a vowel
        {
            printf("\nThis character is a vowel");
            break;

        }//End of case vowel

        // This is to tell if the character is not a vowel
        default:
   		{
            printf("\nCharacter is not a vowel");
            break;
            
   		} // end of default

    }//End of Switch

    return 0;

}