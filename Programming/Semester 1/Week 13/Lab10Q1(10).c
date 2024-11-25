/*

Program Description:

Author:

Date:

*/

#include <stdio.h>

int main()
{
    char chars[] = {'a',' ','b',' ','c',' ',' ','d'};
    char *ptr;


    ptr = &chars;

    if(ptr==' ')
    {
        ptr = '_';
    }

    return 0;
}