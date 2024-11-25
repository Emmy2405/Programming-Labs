/*
Program Description:

Author: Eman Abdelatti

Date: 06/02/2024

*/

#include <stdio.h>

char mostcommon(char, char, char);

int main()
{
    char char1 = 0;
    char char2 = 0;
    char char3 = 0;
    char common = 0;


    printf("\n\nPlease enter 3 characters:");

    while(getchar() != '\n');

    scanf("%c", &char1);
    scanf("%c", &char2);
    scanf("%c", &char3);

    common = mostcommon(char1, char2, char3);

    printf("\n\nThe most common character is: %c", common);

    return 0;
}

char mostcommon(char c1, char c2, char c3)
{

    if( c1 == c2)
    {
        return c1;
    }
    else if(c2 == c3)
    {
        return c2;
    }
    else if( c1 == c3)
    {
        return c3;
    }

}