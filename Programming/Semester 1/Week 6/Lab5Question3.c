/*

Program Description:

Author: Eman Abdelatti

Date: 25/10/2023

*/

#include <stdio.h>

int main()
{
    int num;
    int i;
    

    printf("Enter an any integer from 1 - 5: ");
    scanf("%d", &num);

    for(int i =1; i<=20; i++)//beginning of for loop
    {
        if(i % num == 0)//beginning of if statement
        {
            printf("\n%d", i);
        }//end of if statement
    }//end of for loop

    return 0;
}
