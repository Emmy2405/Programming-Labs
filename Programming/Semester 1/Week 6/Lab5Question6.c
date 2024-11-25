/*

Program Description:

Author: Eman Abdelatti

Date: 25/10/2023

*/

#include <stdio.h>

int main()
{
    int  i = 1;
    int num;

    
    for (i=0 ; i<=99 ; i++)//beginning of for loop
    {
        if(i % 2 == 0)
        {
        
        printf("\n%d," ,num);

        num = i + 1;
        }

    }//end of for loop
    printf("\nsum of odd numbers:%d",num);

    return 0;
}